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

    int remainder = 0;
    int designatorNumber = 1;
    while(processingNumber != 0)
    {
        remainder = processingNumber % 2;
        processingNumber /= 2;
        convertedNumber += remainder * designatorNumber;
        designatorNumber *= 10;
    }
    cout << convertedNumber << endl;

}