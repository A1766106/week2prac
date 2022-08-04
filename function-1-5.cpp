#include <iostream>
#include <stdlib.h>

using namespace std;

// The array sizes need to match as otherwise it will be utilising memory which isnt allocated to the array and thus getting rubbish numbers.

void print_summed(int array1[3][3],int array2[3][3])
{
    int summed[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
           summed[i][j] =  array1[i][j] + array2[i][j];
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
                cout << summed[i][j] << " " ;
        }
        cout << endl ;
        
    }
}


