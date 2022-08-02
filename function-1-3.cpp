#include <iostream>
#include <stdlib.h>

using namespace std;

void count_digits(int array[10][10])
{
    int tallyOfNumbers[10] = {0};
    for(int i=0; i < 10; i++)
    {
        for(int j=0; j < 10; j++)
        {
            tallyOfNumbers[array[i][j]]++;
        }
    }
    
    for(int i=0; i < 10; i++)
    {
     cout << i << ":" << tallyOfNumbers[i] << ";"; 
    }
    cout << endl;
}

