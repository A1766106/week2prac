#include <iostream>
#include <stdlib.h>

using namespace std;

int sum_if_palindrome(int integers[], int length)
{
    int tempPTR = length - 1;
    for(int i = 0; i < length; i++)
    {
        if(i<= tempPTR)
        {
            if(integers[i] != integers[tempPTR])
            return 
        }
    }
}

bool is_palindrome(int integers[], int length)
    {
        int tempPTR = length - 1;
        for(int i = 0; i < length; i++)
        {
         if(i<= tempPTR)
            {
            if(integers[i] != integers[tempPTR])
            {
                return false;
            }
            }
            else
            {
                return true;
            }
            tempPTR--

        }
        return true;
    }
int sum_array_elements(int integers[], int length)