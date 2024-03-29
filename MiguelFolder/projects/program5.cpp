/**------------------------------------------

    Program 5: YAHTZEE

    Course: CS 141, Fall 2022.
    System: Mac and Visual Studio code
    Starter Code Author: Dr. Sara Riazi
    Student Author: Alex Cruz 
-------------------------------------------*/
		#include <iomanip>
        #include <iostream>
        #include <stdio.h>
        #include <stdlib.h>
        #include <string>
        
        using namespace std;
        
        //#################################################################################################
        //create Dice class
        class Dice {
          //private variables
        private:
          int value;
          bool reroll = false;
          //public functions
        public:
          //get the roll of dices
          bool getReroll() { 
            return reroll; 
          }
          //set the rolls of dices
          void setReroll(bool returnRoll) {
            reroll = returnRoll; 
          }
          //unchooses dices
          void unPick() {
            //rollable
            reroll = false; 
          }
          //chooses dices
          void pick() {
            //not rollable
            reroll = true; 
          }
          //assigns a Random value between from 1 to 6 to the dice.
          void roll() { 
            value = (rand() % 6) + 1; 
          }
          //return random value
          int reveal() {
            return value; 
          }
          //The autograder will set the values directly instead of calling roll() to
          //avoid randomness!
          void setValue(int value) { 
            this->value = value; 
          }
        };
        
        //#################################################################################################
        
        const int HAND_SIZE = 5;
        //create Hand class
        class Hand {
          //stores public functions
        public:
          //Display value of the five dice
          void show() {
            cout << "Hand: ";
            //looping through handsize
            for (int i = 0; i < HAND_SIZE; i++) {
              //displays hand values of the 5 dice
              cout << diceArray[i].reveal() << " ";
            }
            //ends line
            cout << endl;
          }
		  
          //rolls the dices,stores them into the new dices displayed
          void play() {
            //for loop that goes through hand size
            for (int j = 0; j < HAND_SIZE; j++) {
              //if statement for dice roll
              //rollable is false 
              if (diceArray[j].getReroll() == false) {
                diceArray[j].roll();
              }
              //set roll
              //rollable is false 
              diceArray[j].setReroll(false);
            }
          }

          //returns address of dice index diceNum
          Dice *getDice(int diceNum) { 
            return &diceArray[diceNum]; 
          }
          //selection is the string of dice numbers that the player wants to keep.
          //For example, "125" means that player wants to keep the first, second, and
          //fifth dice, and roll the rest.
          //function setting the value the dice that is selcted to keep
          void setSelection(string selection) {
            int num;
            //forloop going through selection size
            for (int k = 0; k < selection.size(); k++) {
              num = selection.at(k) - '0';
              //setting reroll of dice array
              //not rollable
              diceArray[num - 1].setReroll(true);
            }
          }

          //calling the hand class
          Hand() {
            //create an instand of the dice class
            Dice dice1;
            Dice dice2;
            Dice dice3;
            Dice dice4;
            Dice dice5;
            //calling the roll of the dice
            dice1.roll();
            dice2.roll();
            dice3.roll();
            dice4.roll();
            dice5.roll();
            //makes the array of the dice equal to the correlated dice number
            diceArray[0] = dice1;
            diceArray[1] = dice2;
            diceArray[2] = dice3;
            diceArray[3] = dice4;
            diceArray[4] = dice5;
            //loops through handsize
            for (int l = 0; l < HAND_SIZE; l++) {
              //diselects the dice
              diceArray[l].unPick();
            }
          }
          //declare private dice array
        private:
          Dice diceArray[HAND_SIZE];
        };
        
        //######################################################################
        
        //List of rows in the board
        //1-6 can be for loop
        //3 of a kind, etc can be own function or if statemnet in calculate score
        const int ONES = 0;
        const int TWOS = 1;
        const int THREES = 2;
        const int FOURS = 3;
        const int FIVES = 4;
        const int SIXES = 5;
        const int THREE_OF_KIND = 6;
        const int FOUR_OF_KIND = 7;
        const int FULL_HOUSE = 8;
        const int SMALL_STRAIGHT = 9;
        const int LARGE_STRAIGHT = 10;
        const int CHANCE = 11;
        const int YAHTZEE = 12;
        
        const int BOARD_SIZE = 13;
        
        //control one hand and score board
        // creating a Game class
        class Game {
          //creating private array
        private:
          int arrayScore[13] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
          //creating public functions
        public:
          //calcScore returns a score of a hand (5 dice) for given row in the board.
          //Note the rows are indexed from zero.
          //For example if the hand is 2 1 1 5 1 then calcScore(hand, ONES) returns 3
          //and  calcScore(hand, TWOS) returns 2.
          //calculates the score of each category
          int calcScore(Hand *hand, int row) {
            //creating bool variable for each category
            //initially sets bool values to false
            bool onesCount = false;
            bool twosCount = false;
            bool threesCount = false;
            bool foursCount = false;
            bool fivesCount = false;
            bool sixesCount = false;
            bool threeOfAKind = false;
            bool FourofaKind = false;
            bool hasYAHTZEE = false;
            bool LargeStraight = false;
            bool SmallStraight = false;
            bool Fullhouse = false;
            bool TwoOfKind = false;
            //initalize each variable
            //counter for each dice value..how many times each occur 1,2,3...
            int diceCounter[6] = {0, 0, 0, 0, 0, 0};
            int totalScore = 0;
            int score = 0;

            /**************** Upper section combinations *************************/
            //loops through HANDSIZE
            for (int i = 0; i < HAND_SIZE; i++) {
              //get value of each dice
              int diceVal = hand->getDice(i)->reveal();
              totalScore += diceVal;
              //counts the times value is in a sequence of dice
              diceCounter[diceVal - 1] += 1;
              //if the value of each dice is equal to row number inputted then equal true
              //true means that the category is able to be played 
              //rows 1-6
              if (diceVal == 1) {
                onesCount = true;
              } else if (diceVal == 2) {
                twosCount = true;
              } else if (diceVal == 3) {
                threesCount = true;
              } else if (diceVal == 4) {
                foursCount = true;
              } else if (diceVal == 5) {
                fivesCount = true;
              } else if (diceVal == 6) {
                sixesCount = true;
              }
            }

            /**************** Lower section combinations *************************/
            //calcute the number of times of every dice value
            //forloop through 6
            for (int j = 0; j < 6; j++) {
              //when dice counter equals
              //certain row number id true if rows 7-13 statisfy condition
              //true means that category can be played
              if (diceCounter[j] == 2) {
                TwoOfKind = true;
              } else if (diceCounter[j] == 3) {
                threeOfAKind = true;
              } else if (diceCounter[j] == 4) {
                FourofaKind = true;
              } else if (diceCounter[j] == 5) {
                hasYAHTZEE = true;
              }
            }

            //check condition fullhouse
            if (threeOfAKind == true && TwoOfKind == true) {
              Fullhouse = true;
            }
            //check condition for small straight and large straight
            if (onesCount && twosCount && threesCount && foursCount) {
              SmallStraight = true;
              if (fivesCount) {
                LargeStraight = true;
              }
            }
            //checks conditions for small straight and large straight
            if (twosCount && threesCount && foursCount && fivesCount) {
              SmallStraight = true;
              if (sixesCount || onesCount) {
                LargeStraight = true;
              }
            }
            //checks condition for small straight and large straight
            if (threesCount && foursCount && fivesCount && sixesCount) {
              SmallStraight = true;
              if (twosCount) {
                LargeStraight = true;
              }
            }

            //switch cases for each case category section
            switch (row) {
            case ONES: // 0
              //calculation to equal scorearray
              arrayScore[row] = diceCounter[row] * (row + 1);
              //score equaling the sorearray value
              score = arrayScore[row];
              break;
            case TWOS: // 1
              //calculation to equal scorearray
              arrayScore[row] = diceCounter[row] * (row + 1);
              //score equaling the sorearray value
              score = arrayScore[row];
              break;
            case THREES: // 2
              //calculation to equal scorearray
              arrayScore[row] = diceCounter[row] * (row + 1);
              //score equaling the sorearray value
              score = arrayScore[row];
              break;
            case FOURS: // 3
              //calculation to equal scorearray
              arrayScore[row] = diceCounter[row] * (row + 1);
              //score equaling the sorearray value
              score = arrayScore[row];
              break;
            case FIVES: // 4
              //calculation to equal scorearray
              arrayScore[row] = diceCounter[row] * (row + 1);
              //score equaling the sorearray value
              score = arrayScore[row];
              break;
            case SIXES: // 5
              //calculation to equal scorearray
              arrayScore[row] = diceCounter[row] * (row + 1);
              //score equaling the sorearray value
              score = arrayScore[row];
              break;
            case THREE_OF_KIND:
              //seeing if condition is satisfied
              if (threeOfAKind == true || FourofaKind == true || hasYAHTZEE == true) {
                //makingarray to equal the totalscore
                arrayScore[6] = totalScore;
                //score is equal to total
                score = totalScore;
              } else {
                //scorearray at three of a kind
                arrayScore[6] = 0;
              }
              break;
            case FOUR_OF_KIND:
              //seeing if condition is satisfied
              if (FourofaKind == true || hasYAHTZEE == true) {
                //makingarray to equal the totalscore
                arrayScore[7] = totalScore;
                score = totalScore;
              } else {
                //scorearray at four of a kind
                arrayScore[7] = 0;
              }
              break;
            case FULL_HOUSE:
              //seeing if condition is satisfied
              if (Fullhouse == true || hasYAHTZEE == true) {
                //makingarray to equal to 25
                arrayScore[8] = 25;
                score = 25;
              } else {
                //scorearray at fullhouse
                arrayScore[8] = 0;
              }
              break;
            case SMALL_STRAIGHT:
              //seeing if condition is satisfied
              if (SmallStraight == true) {
                //makingarray to equal to 30
                arrayScore[9] = 30;
                score = 30;
              } else {
                //scorearray at small staright
                arrayScore[9] = 0;
              }
              break;
            case LARGE_STRAIGHT:
              //seeing if condition is satisfied
              if (LargeStraight == true) {
                //array equal to 40
                arrayScore[10] = 40;
                score = 40;
              } else {
                //scorearray large straight
                arrayScore[10] = 0;
              }
              break;
            case YAHTZEE:
              //is condition satisfied
              if (hasYAHTZEE == true) {
                //array equals 50
                arrayScore[12] = 50;
                score = 50;
              } else {
                //score array Yahtzee
                arrayScore[12] = 0;
              }
              break;
            case CHANCE:
              //array equals totalscore
              arrayScore[11] = totalScore;
              score = totalScore;
              break;
            }
            return score;
          }
        
          //Display the board
          void show() {
            int sum = 0;
            int bonus = 0;
            int total = 0;
            char init_char = '-';
            //if condition is met, display menu 
            if (arrayScore[0] == -1) {
              cout << "1.  Ones:               " << init_char << endl;
            }
            //displays the updated value of score otherwise
            else {
              cout << "1.  Ones:               " << arrayScore[0] << endl;
            }
            //displays default menu if condition met
            if (arrayScore[1] == -1) {
              cout << "2.  Twos:               " << init_char << endl;
            }
            //displays the updated value of score otherwise
            else {
              cout << "2.  Twos:               " << arrayScore[1] << endl;
            }
            //if condition is met, display menu 
            if (arrayScore[2] == -1) {
              cout << "3.  Threes:             " << init_char << endl;
            }
            //displays the updated value of score otherwise
            else {
              cout << "3.  Threes:             " << arrayScore[2] << endl;
            }
            //if condition is met, display menu 
            if (arrayScore[3] == -1) {
              cout << "4.  Fours:              " << init_char << endl;
            }
            //displays the updated value of score otherwise
            else {
              cout << "4.  Fours:              " << arrayScore[3] << endl;
            }
            //if condition is met, display menu 
            if (arrayScore[4] == -1) {
              cout << "5.  Fives:              " << init_char << endl;
            }
            //displays the updated value of score otherwise
            else {
              cout << "5.  Fives:              " << arrayScore[4] << endl;
            }
            //if condition is met, display menu 
            if (arrayScore[5] == -1) {
              cout << "6.  Sixes:              " << init_char << endl;
            }
            //displays the updated value of score otherwise
            else {
              cout << "6.  Sixes:              " << arrayScore[5] << endl;
            }
            //displays the sum and bonus--> sum uses upperscore and bonus is 0 unless
            //changed otherwise
            cout << "    Sum:                " << getUpperScore() << endl;
            cout << "    Bonus:              " << 0 << endl;
            //if condition is met, display menu 
            if (arrayScore[6] == -1) {
              cout << "7.  Three of a kind:    " << init_char << endl;
            }
            //displays the updated value of score otherwise
            else {
              cout << "7.  Three of a kind:    " << arrayScore[6] << endl;
            }
            //if condition is met, display menu 
            if (arrayScore[7] == -1) {
              cout << "8.  Four of a kind:     " << init_char << endl;
            }
            //displays the updated value of score otherwise
            else {
              cout << "8.  Four of a kind:     " << arrayScore[7] << endl;
            }
            //if condition is met, display menu 
            if (arrayScore[8] == -1) {
              cout << "9.  Full house:         " << init_char << endl;
            }
            //displays the updated value of score otherwise
            else {
              cout << "9.  Full house:         " << arrayScore[8] << endl;
            }
            //if condition is met, display menu 
            if (arrayScore[9] == -1) {
              cout << "10. Small straight:     " << init_char << endl;
            }
            //displays the updated value of score otherwise
            else {
              cout << "10. Small straight:     " << arrayScore[9] << endl;
            }
            //if condition is met, display menu 
            if (arrayScore[10] == -1) {
              cout << "11. Large straight:     " << init_char << endl;
            }
            //displays the updated value of score otherwise
            else {
              cout << "11. Large straight:     " << arrayScore[10] << endl;
            }
            //if condition is met, display menu 
            if (arrayScore[11] == -1) {
              cout << "12. Chance:             " << init_char << endl;
            }
            //displays the updated value of score otherwise
            else {
              cout << "12. Chance:             " << arrayScore[11] << endl;
            }
            //if condition is met, display menu 
            if (arrayScore[12] == -1) {
              cout << "13. Yahtzee:            " << init_char << endl;
            }
            //displays the updated value of score otherwise
            else {
              cout << "13. Yahtzee:            " << arrayScore[12] << endl;
            }
            cout << "Total:                  " << getTotalScore() << endl;
          }
        
          //Returns the score of the upper part of the board
          int getUpperScore() {
            int sum = 0;
            //for loop looping through 6
            for (int i = 0; i < 6; i++) {
              //if statement for array that is greater than 0
              if (arrayScore[i] >= 0)
                //sum is equal to score array at specific point plus the sum
                sum += arrayScore[i];
            }
            return sum;
          }
        
          //Returns the score of the lower part of the board
          int getLowerScore() {
            int total = 0;
            //for loop looping from 7(starting from)-13
            for (int i = 6; i < 13; i++) {
              //if statement for array not to equal inital value of array
              if (arrayScore[i] != -1) {
                //total is equal to score array at specific point plus the total
                total = total + arrayScore[i];
              }
            }
            return total;
          }
        
          //Returns the bonus points
          int getBonusScore() {
            //if statement that checks if the summ of the upperrscore is greater than 63
            if (getUpperScore() >= 63) {
              //returns 35 if true
              return 35;
            } else {
              //returns 0 otherwise
              return 0;
            }
          }
        
          //Returns the total score
          int getTotalScore() {
            int score;
            //adds upper, lower, and bonus score
            score = getUpperScore() + getLowerScore() + getBonusScore();
            return score;
          }
        
          //Play a hand based on the selected row
          void play(Hand *hand, int row) {
            //if statement checking if function doens't equal true
            if (isPlayed(row) != true) {
              //checking if the isFinished fucntions doesn't equal to true
              if (isFinished() != true) {
                //calculate score if satisfy the above if statements
                calcScore(hand, row);
              }
            }
          }
        
          //Check to see if a row has been played or not (returns true if a row has been played)
          bool isPlayed(int row) {
            bool isPlayed = true;
            //checks if score array is -1
            if (arrayScore[row] == -1) {
              //makes isplayed equal to false if satisfied
              isPlayed = false;
            }
            return isPlayed;
          }
        
          //Check to see if all rows have been played or not (returns true if all rows have been played)
          bool isFinished() {
            bool isFinished = true;
            //loops through board size
            for (int i = 0; i < BOARD_SIZE; i++) {
              //checks if isplayed is equal to false
              if (isPlayed(i) == false) {
                //returns false if satisfied otherwise returns true
                return false;
              }
            }
            return true;
          }
        };
        
        //#######################################################################################
        
        //The run function is the main loop of your program
        void run() {
          Game player1;
          Hand *hand1 = new Hand();
          int combo = 0;
          string userInput;
          //while loop for checking when game is not finished 

          while (!player1.isFinished()) {
            //displays the board
            player1.show();
            //plays the dice
            hand1->play();
            //for loop going through everytime i is less than 2
            for (int i = 0; i < 2; i++) {
              //shows the dice
              hand1->show();
              //cout statement
              cout << "Keep Dice (s to stop rolling): ";
              //stores the value to userinput
              cin >> userInput;
              //checks if s is inputed
              if (userInput == "s") {
                //breaks the if statemnt 
                break;
              }
              //stores the userinput to the selection
              hand1->setSelection(userInput);
              //makes the hand roll
              hand1->play();
            }

            //shows the menu
            player1.show();
            //dices are shown
            hand1->show();
            //cout a combo
            cout << "Select a combination to play: ";
            //store the value to ccombo
            cin >> combo;
            //while loop when the game is played

            while (player1.isPlayed(combo - 1)) {
              //cout statement 
              cout << "This combination has been played. Select another one: ";
              //store value
              cin >> combo;
            }
            //game is being played
            player1.play(hand1, combo - 1);
          }
          //show menu 
          player1.show();
        }
        
        // For these types of programs there exists many combinations that you might
        // have missed. The best way to check them all is to write test cases for your
        // program. Here I give you an example of checking large straight. You can
        // design your own test cases for different parts.
        
        // void test_case() {
        //   Game game;
        //   Hand *hand = new Hand();
        //   hand->getDice(0)->setValue(1);
        //   hand->getDice(1)->setValue(2);
        //   hand->getDice(2)->setValue(3);
        //   hand->getDice(3)->setValue(4);
        //   hand->getDice(4)->setValue(5);
        
        //   bool check1 = true;
        //   if (game.calcScore(hand, LARGE_STRAIGHT) != 40) {
        //     check1 = false;
        //   }
        //   if (check1) {
        //     cout << "check 1 passed\n";
        //   }
        
        //   hand->getDice(0)->setValue(2);
        //   hand->getDice(1)->setValue(6);
        //   hand->getDice(2)->setValue(4);
        //   hand->getDice(3)->setValue(3);
        //   hand->getDice(4)->setValue(5);
        
        //   bool check2 = true;
        //   if (game.calcScore(hand, LARGE_STRAIGHT) != 40) {
        //     check2 = false;
        //   }
        
        //   if (check2) {
        //     cout << "check 2 passed\n";
        //   }
        
        //   hand->getDice(0)->setValue(3);
        //   hand->getDice(1)->setValue(2);
        //   hand->getDice(2)->setValue(5);
        //   hand->getDice(3)->setValue(6);
        //   hand->getDice(4)->setValue(3);
        
        //   bool check3 = true;
        //   if (game.calcScore(hand, LARGE_STRAIGHT) != 0) {
        //     check3 = false;
        //   }
        
        //   if (check3) {
        //     cout << "check 3 passed\n";
        //   }
        
        //   hand->getDice(0)->setValue(1);
        //   hand->getDice(1)->setValue(2);
        //   hand->getDice(2)->setValue(3);
        //   hand->getDice(3)->setValue(4);
        //   hand->getDice(4)->setValue(6);
        
        //   bool check4 = true;
        //   if (game.calcScore(hand, LARGE_STRAIGHT) != 0) {
        //     check4 = false;
        //   }
        
        //   if (check4) {
        //     cout << "check 4 passed\n";
        //   }
        //   hand->getDice(0)->setValue(1);
        //   hand->getDice(1)->setValue(1);
        //   hand->getDice(2)->setValue(1);
        //   hand->getDice(3)->setValue(1);
        //   hand->getDice(4)->setValue(6);
        
        //   bool check5 = true;
        //   if (game.calcScore(hand, ONES) != 4) {
        //     check5 = false;
        //   }
        
        //   if (check5) {
        //     cout << "check 5 passed\n";
        //   }
        // }
        
        // THE AUTOGRADER WILL REPLACE THE MAIN FUNCTION.
        // DO NOT ADD ANY LOGIC OF YOUR PROGRAM HERE.
        int main() {
          srand(time(0));
          run();
          // test_case();
          return 0;
        }