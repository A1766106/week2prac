#include <iostream>

using namespace std;

extern int is_identity(int array[10][10]);

int main()
{
    int array[10][10]= {{1,0,0,0,0,0,0,0,0,0},{0,1,0,0,0,0,0,0,0,0},{0,0,1,0,0,0,0,0,0,0},{0,0,0,1,0,0,0,0,0,0}, {0,0,0,0,1,0,0,0,0,0}, {0,0,0,0,0,1,0,0,0,0}, {0,0,0,0,0,0,1,0,0,0}, {0,0,0,0,0,0,0,1,0,0}, {0,0,0,0,0,0,0,0,1,0}, {0,0,0,0,0,0,0,0,0,1}};
    cout << "If identity matrix 1 if not 0: " << is_identity(array) << endl;
    return 0;
}

