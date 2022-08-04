#include <iostream>
#include <stdlib.h>

using namespace std;

int array_min(int integers[], int length)
{
       if(length <= 0){
        return-1;
    }
    int minimum = 0;
    for(int i=0; i < length; i++)
    {
        if(integers[i] < minimum)
        {
            minimum = integers[i];
        }
    }
    return minimum;
}

int array_max(int integers[], int length)
{
    if(length <= 0){
        return-1;
    }
   int maximum = 0;
    for(int i=0; i < length; i++)
    {
        if(integers[i] > maximum)
        {
            maximum = integers[i];
        }
    }
    return maximum;
}

int sum_min_max(int integers[], int length)
{
    if(length <= 0){
        return-1;
    }
    int sum = 0;
    sum = array_max(integers, length) + array_min(integers, length);
    return sum;

}