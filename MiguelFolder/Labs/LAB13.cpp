#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;
int numberCount(int n)
/* Implement this function and call it in problem 1 to get the count of numbers */
{
   if(n==0){
       return 0;
   }
   else{
       return 1+numberCount(n/10);
   }

}

bool checkNumber(int arr[],int element,int n)
/* Implement this function and call it in problem 2 to check if the number is found or not */
{
    if((n-1)==-1){
        return false;
    }
    if(arr[n-1]==element){
        return true;
    }
    else{
        return checkNumber(arr,element,n-1);
    }

}

int lastIndex(int arr[],int element,int n)
/* Implement this function and call it in problem 3 to get the last index of a number */

{
    if((n-1)==-1){
        return -1;
    }
    if(arr[n-1]==element){
        return n-1;
    }
    else{
        return lastIndex(arr,element,n-1);
    }

}

/* Read number as input and call the numberCount() function by passing the input number as a parameter.*/
void problem1()
{
    int number;
    cout<<"Enter input number: ";
    cin>>number;
    cout<<"count of numbers: "<<numberCount(number)<<endl;

}
/* Input is going to be an array of numbers for this problem. First read Array size as input, then read array elements
followed by the number you want to check. Call the checkNumber() function to check if the number is present in the array or not.
It takes the array, array size and the element to be searched as parameters. */
void problem2()
{
    int n,temp,element;
    
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    
    for(int i=0;i<n;i++){
        cin>>temp;
        arr[i]=temp;
    }
    cout<<"Enter array element to be searched: ";
    cin>>element;

    if(checkNumber(arr,element,n)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

}

/* Input is going to be an array of numbers for this problem. First read Array size as input, then read array elements
followed by the number whose last index you want to return. Call the lastIndex() function to return a numbers last index.
It takes the array, array size and the element to be searched as parameters. */

void problem3()
{
    int n,temp,element;
    
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    
    for(int i=0;i<n;i++){
        cin>>temp;
        arr[i]=temp;
    }
    cout<<"Enter element whose last index should be returned: ";
    cin>>element;

    cout<<lastIndex(arr,element,n)<<endl;

}
  
int main() {
// You should not change the code below this point.
// All your changes should be inside the individual functions shown above.
int menuOption = 0;

cout << "Enter which problem to run: "<<endl;
cin >> menuOption;
switch(menuOption) {
case 1: problem1(); break;
case 2: problem2(); break;
case 3: problem3(); break;
}

cout << "Done." << endl;
return 0;
}