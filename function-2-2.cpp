#include <iostream>
#include <stdlib.h>

using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits)
{
    int intValue = 0;
    int multiplier = 1;
    int interval = number_of_digits-1;
    
    while(interval >=0)
    {
        intValue += binary_digits[interval]*multiplier;
        multiplier = multiplier*2; 
        interval = interval-1;

    }

    return intValue;

}