#include <iostream>

using namespace std;

extern int count_digits(int array[10][10]);

int main()
{
    int array[10][10]= {{1,0,0,0,0,0,0,0,0,0},{0,1,0,0,0,0,0,0,0,0},{0,0,1,0,0,0,0,0,0,0},{0,0,0,1,0,0,0,0,0,0}, {0,0,0,0,1,0,0,0,0,0}, {0,0,0,0,0,1,0,0,0,0}, {0,0,0,0,0,0,1,0,0,0}, {0,0,0,0,0,0,0,1,0,0}, {0,0,0,0,0,0,0,0,1,0}, {0,0,0,0,0,0,0,0,0,1}};
    count_digits(array);
    return 0;
}

