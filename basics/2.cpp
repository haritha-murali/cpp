// integer overflow & underflow

#include <iostream>
using namespace std;

int main()
{
    short int x = 32767;
    unsigned short int y = 65535;
    x++, y++;
    cout << x << " " << y << endl;

    return 0;
}