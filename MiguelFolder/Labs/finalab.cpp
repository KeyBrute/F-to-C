#include <iostream>
using namespace std;

// Declare the Node structure to be used for the linked list.
// Each node should have an int for data, and
// a pointer to the next node.
struct Node {
int data;
Node *pNext;
};

// Displays the list number values
void display( Node *pTemp){
while( pTemp != NULL) {
cout << pTemp->data;
if(pTemp->pNext!=NULL)
{
cout << "->";
}
pTemp = pTemp->pNext;
}
cout << endl;
}

// Create a new node, put the userInput number in it, and APPEND
// it to the END of the list.
void append(Node* &pHead, int userInput) {
Node *pTemp = new Node;
pTemp->data = userInput;
pTemp->pNext = NULL;

Node *pLast = pHead;
// Find the last node on the list
while(pLast != NULL && pLast->pNext != NULL) {
pLast = pLast->pNext;
}

if( pLast == NULL) {
// Make this new node the first node on an otherwise empty list
pHead = pTemp;
}
else {
// Append this new node to the end of the existing list
pLast->pNext = pTemp;
}
}

//-----------------------------------------------------------------------
// *** Do not change anything above this point. ***
//------------------------------------------------------------------------


// The function you have to complete would be here:
void someFunctionToDo(Node* &pHead) {
//...
Node * temp=pHead;
int sum=0;

//checking if the list is empty
if(temp==NULL)
return ;

//we traverse the list if it is not empty
while(temp!=NULL)
{

//maintain the sum
sum=sum+temp->data;

//replace the data with sum
temp->data=sum;

//move to the next node
temp=temp->pNext;
}
}

//-----------------------------------------------------------------------
// *** Do not change anything below this point. ***
//------------------------------------------------------------------------

int main() {
int userInput;
Node *pHead = NULL; // pointer to the head of the list

// Create the linked list
cout << "Enter list numbers separated by space, followed by -1: ";
cin >> userInput;

// Keep looping and appending nodes on the list until
// end-of-input flag of -1 is given
while(userInput != -1) {
// Store this number on the list
append(pHead, userInput);
cin >> userInput;
}

// Call the function and display the list before and after
cout << "The list is: " << endl;
display(pHead);
someFunctionToDo(pHead);
display(pHead);

return 0;

}// end main()