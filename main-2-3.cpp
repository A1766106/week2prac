#include <iostream>
#include <stdlib.h>

using namespace std;

extern void(sum_if_palindrome(int integers[], int length));

main()
{
int arraySize = 0;

cout << "What is the size of the array? " << endl;
cin >> arraySize;
int integers[arraySize];

for(int i=0; i<arraySize; i++)
{
    cout << "What number would you like to be in array? ";
    cin >> integers[i];
    cout << "Sum of array (if not palindrome -2 and if palindrome but the length is 0 or less then -1): ";
    sum_if_palindrome(integers,arraySize); 
}

}



