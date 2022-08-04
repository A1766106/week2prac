#include <iostream>
#include <stdlib.h>

using namespace std;

extern void(sum_min_max(int integers[], int length));

int main()
{
    int arraySize = 0;
    cout << "What is the size of the array? " << endl;
    cin >> arraySize;
    int integers[arraySize];

    for(int i=0; i<arraySize; i++)
    {
        cout << "What number would you like to be in array? ";
        cin >> integers[i];
    }
    cout << "The Sum of the array is: ";
    sum_min_max(integers, arraySize);
}