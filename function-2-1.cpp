#include <iostream>
#include <stdlib.h>

using namespace std;

void print_binary_str(std::string decimal_number)
{
    int convertedNumber = 0;
    int processingNumber = stoi(decimal_number);
    if(processingNumber < 1)
    {
        cout << "This number is invalid as it is less than 1. " << endl;
        return;
    }
    while(processingNumber > 0)
    {
        convertedNumber = processingNumber % 2;
        processingNumber /= 2;
        cout << convertedNumber;
    }
    cout << endl;

}