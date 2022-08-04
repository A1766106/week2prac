#include <iostream>
#include <stdlib.h>

using namespace std;

bool is_palindrome(int integers[], int length);

int sum_array_elements(int integers[], int length);

int sum_if_palindrome(int integers[], int length)
{
    if(length <= 0)
    {
        return -1;
    }
    if(is_palindrome(integers, length) == 0)
    {
        return -2;
    }
    else
    {
        return sum_array_elements(integers, length);
    }
  
}

bool is_palindrome(int integers[], int length)
    {
        if(length <= 0)
        {
            return false;
        }
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
            tempPTR--;

        }
        return true;
    }

int sum_array_elements(int integers[], int length)
{
        if(length <= 0)
    {
        return -1;
    }
    
    int sum = 0;
    for(int i = 0; i < length; i++)
    {
        sum = integers[i] + sum;
    }
    return sum;
}



