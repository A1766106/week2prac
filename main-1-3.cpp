#include <iostream>

using namespace std;

extern int count_digits(int array[4][4]);

int main()
{
    int array[4][4]= {{1,0,0,0}, {1,0,0,0}, {1,0,0,0}, {1,0,0,0}};
    count_digits(array);
    return 0;
}

