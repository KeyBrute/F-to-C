#include <iostream>
using namespace std;

// This is the definition of the node class.

class Node {
   public:
      int data;
      Node *pNext;
};

// This function will display the linked list.
// This function is automatically called in problem2()

void displayList (Node *pHead) {
    while (pHead != NULL){
        cout << pHead -> data << " ";
        pHead = pHead -> pNext;
    }
}

// -----------------------------------------------------------------------------------------------------

/*

  Problem 1

  Given a set a of nodes in a Linked List, find the node with the minimum value.

  Please the your code in the findMinimum() function.
  After you find the node with the minimum value, display it right there in the findMinimum() function.
  Do not change any code in problem1()

  When input is:
  1 6
  3 5 2 2 7 9

  Output should be:
  2

*/

// Write the code in this function, print your answer here as well:


void findMinimum(Node *pHead) {
   
   
   Node* tmp = pHead;
   if(tmp==NULL)return; //if one node or value is there;
   
   int mx= pHead->data; //Let's first value is the minimum one.
   
   while(tmp){ //unless tmp is not equal to NULL.
       if(mx > tmp->data){
           mx = tmp->data;
       }
       
       
       tmp= tmp->pNext;
   }
   cout<<"Minimum Value: "<<mx<<endl;
   
}


// Do not change any code in problem1()

void problem1()
{
    
   Node *pHead = NULL;
   Node *pTail = NULL;
   Node *pTemp;
   int n, number;
   cout << "Enter number of nodes: ";
   cin >> n;
   for (int i = 0; i < n; ++i){
      cin >> number;
      pTemp = new Node;
      pTemp -> data = number;
      pTemp -> pNext = NULL;
      if (pHead == NULL){
         pHead = pTemp;
         pTail = pTemp;
        }
      else{
         pTail -> pNext = pTemp;
         pTail = pTail -> pNext;
      }
    }

    findMinimum(pHead);

} // end problem1()

// -----------------------------------------------------------------------------------------------------

/*

  Problem 2

  Given a list of 1s and 0s, balance the 1s and 0s.
  The number of 1s and 0s in the input only differ by 1.
  Prepend the new node to the start of the list.

  Please the your code in the balanceList() function.
  Just prepend the node to the list. NO NEED TO DISPLAY ANYTHING.
  The display function is automatically called in problem2()
  Do not change any code in problem2()
   
  When input is:
  2 5
  1 0 0 1 1
   
  Output should be:
  0 1 0 0 1 1

*/

// Write the code in this function:
// DO NOT DISPLAY ANYTHING. JUST ADD THE NEW NODE TO THE START OF THE LIST.
// Display function is automatically called in problem2()
// Pointer pHead is passed by reference, so do not directly use pHead.
// Please do something like this: Node *pCurr = pHead; and use pCurr instead.
void balanceList(Node *&pHead) { 
    int one=0, zero=0; //one and zero for count one's and zero's in linked lists;
    
    Node* tmp= pHead;
     if(tmp==NULL)return;
    while(tmp){
        if(tmp->data==1)one++;
        else zero++;
        tmp= tmp->pNext;
    }
    
    if(one==zero)return;
    
    else if(one > zero){
        Node *pTemp;
        pTemp = new Node;
        pTemp -> data = 0;
        pTemp -> pNext = pHead;
        pHead = pTemp;
    }else{
        Node *pTemp;
        pTemp = new Node;
        pTemp -> data = 1;
        pTemp -> pNext = pHead;
        pHead = pTemp;
    }
}

// Do not change any code in problem2()

void problem2()
{
   Node *pHead = NULL;
   Node *pTail = NULL;
   Node *pTemp;
   int n, number;
   cout << "Enter number of nodes: ";
   cin >> n;
   for (int i = 0; i < n; ++i){
      cin >> number;
      pTemp = new Node;
      pTemp -> data = number;
      pTemp -> pNext = NULL;
      if (pHead == NULL){
         pHead = pTemp;
         pTail = pTemp;
      }
      else{
         pTail -> pNext = pTemp;
         pTail = pTail -> pNext;
      }
   }

   balanceList(pHead);
   cout << "Balanced List: ";
   displayList(pHead);

} // end problem2()

// -----------------------------------------------------------------------------------------------------

/*

  Problem 3 - Extra Credit

  Given a linked list, check if it is sorted in increasing order.

  Please the code in the isSorted() function.
  Display the output right there in the isSorted() function.
  Do not change any code in problem3()

  When the input is
  3 5
  2 4 6 8 10

  Output should be:
  Sorted

*/

// Write the code in this function, print your answer here as well:

void isSorted(Node *pHead) {
   bool flag=1; // flag==1 means that is sorted.
   
   Node* tmp= pHead;
   if(tmp==NULL){ //if NULL that means that, is Sorted.
       cout<<"Sorted"<<endl;
       return;
   }
   int val = tmp->data;
   tmp= tmp->pNext;
   while(tmp){
       if(val > tmp->data) //if any value is short than it's previous that means it's not sorted.
       {
           flag=0; //Not sorted.
           break;
       }
       
       val = tmp->data;
       tmp= tmp->pNext;
   }
   
   if(flag==1)cout<<"Sorted"<<endl;
   else cout<<"Not Sorted"<<endl;
}

// Do not change anything in problem3()

void problem3()
{

   Node *pHead = NULL;
   Node *pTail = NULL;
   Node *pTemp;
   int n, number;
   cout << "Enter number of nodes: ";
   cin >> n;
   for (int i = 0; i < n; ++i){
      cin >> number;
      pTemp = new Node;
      pTemp -> data = number;
      pTemp -> pNext = NULL;
      if (pHead == NULL){
         pHead = pTemp;
         pTail = pTemp;
      }
      else{
         pTail -> pNext = pTemp;
         pTail = pTail -> pNext;
      }
   }

   isSorted(pHead);

} // end problem3()

int main()
{

    // You should not change the code below this point.
    // All your changes should be inside the individual functions above.

    int menuOption = 0;

    cout << "Enter which problem to run: ";
    cin >> menuOption;
    switch (menuOption)
    {
    case 1:
        problem1();
        break;
    case 2:
        problem2();
        break;
    case 3:
        problem3();
        break;
    }

    cout << "\nDone." << endl;
    return 0;

} // end main