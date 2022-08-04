#include <iostream>
#include <stdlib.h>

using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main()
{
    int number_of_digits = 0;
    cout << "What number of digits would you like to include in your array? ";
    cin >> number_of_digits;
    int binary_digits[number_of_digits];
    for(int i = 0; i < number_of_digits; i++)
    {
        cout << "What is the digit you want to enter? ";
        cin >> binary_digits[i];
        cout << endl;
    }
    cout << "Your integer value is " << binary_to_int(binary_digits, number_of_digits) << endl;
}