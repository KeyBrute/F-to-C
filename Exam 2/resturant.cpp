/*
 CS 141 Midterm #2, Fall 2022
 Professor Kidane and Professor Riazi

 This midterm exam consists of a single problem.  All points 
 come from your solution passing tests in Zybooks.

 You may not communicate with anyone else during the test. You may
 consult your text, your notes, files archived in your account, and 
 the Web, but you may not use text messages, phone calls, chat or any
 sort of messaging service.

 You don't need to comment your code or worry about having meaningful 
 variable names.  We will only be grading the output of your program.  

 You may assume perfect input (i.e. no error checking is necessary) 
 unless we specifically state otherwise. 
*/

/* Running the program looks like the following:
            Alina is rated 4
            Enter a restaurant name and rating (e.g. Hackneys 2): Hackneys 2
            Hackneys is rated 2
            With this new rating, the overall rating for Alina would be 3.
            With this new rating, the overall rating for Hackneys would be 3.
            The rating of the restaurant whose name is alphabetically first is: 4
*/

#include <iostream>
#include <vector>

using namespace std;

struct Restaurant
{
    string name;
    int rating;
};

void display(const Restaurant &r)
{
    cout << r.name << " is rated " << r.rating << endl;
}

void addRating(const Restaurant &r, int rating)
{
    double newRating = (r.rating + rating) / 2;
    cout << "With this new rating, the overall rating for " << r.name << " would be " << newRating << ".\n";
}

void displayRatingOfFirstRestaurant(vector<Restaurant> &r)
{
    int max = 0;
    for (int i = 0; i < r.size(); i++)
    {
        if (r[i].name < r[max].name)
            max = i;
    }
    cout << "The rating of the restaurant whose name is alphabetically first is: " << r[max].rating << endl;
}

int main()
{

    struct Restaurant aRestaurant;
    aRestaurant.name = "Alina";
    aRestaurant.rating = 4;
    cout << aRestaurant.name << " is rated " << aRestaurant.rating << endl;

    struct Restaurant anotherRestaurant;
    cout << "Enter a restaurant name and rating (e.g. Hackneys 2): ";
    cin >> anotherRestaurant.name >> anotherRestaurant.rating;
    display(anotherRestaurant);

    addRating(aRestaurant, 3);
    addRating(anotherRestaurant, 5);

    struct Restaurant thirdRestaurant;
    thirdRestaurant.name = "Moe's";
    thirdRestaurant.rating = 3;

    vector<Restaurant> allRestaurants;
    allRestaurants.push_back(aRestaurant);
    allRestaurants.push_back(anotherRestaurant);
    allRestaurants.push_back(thirdRestaurant);

    displayRatingOfFirstRestaurant(allRestaurants);

    return 0;
} // end main()