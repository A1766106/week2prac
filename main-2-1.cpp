#include <iostream>
#include <stdlib.h>

using namespace std;

extern void(print_binary_str(std::string decimal_number));

int main()
{
    string decimal_number = "0";
    cout << "Please provide a decimal number you wish to convert to binary: ";
    cin >> decimal_number;
    print_binary_str(decimal_number);

    return 0;
}