#include <iostream>
#include <stdlib.h>

using namespace std;

void print_scaled(int array[3][3],int scale)
{
    int scaledNumbers[3][3];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scaledNumbers[i][j] = array[i][j]*scale;
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << scaledNumbers[i][j] << " " ;
        }
        cout << scaledNumbers[i][2] ;
        cout << endl ;
    }
    
}