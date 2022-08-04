#include <iostream>
#include <stdlib.h>

using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits)
{
    int intValue = 0;
    int multiplier = 1;
    
    for(int i=0; i<number_of_digits; i++)
    {
        intValue += binary_digits[i]*multiplier;
        multiplier = multiplier*2;
    }

    return intValue;

}