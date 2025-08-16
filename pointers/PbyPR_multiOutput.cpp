#include <iostream>
using namespace std;

// pointers-pass by references- Both used to return multiple outputs from functions
void PbyR(int a, int b, int &p1, int &p2)
{
    p1 = a + b;
    p2 = a * b;
}

// pointers-pass by pointer- Both used to return multiple outputs from functions
void PbyP(int a, int b, int *p1, int *p2)
{
    *p1 = a + b;
    *p2 = a * b;
}

int main()
{
    int o1, o2, o3, o4;
    PbyR(2, 3, o1, o2);
    PbyP(2, 3, &o3, &o4);
    cout << o1 << endl;
    cout << o2 << endl;
    cout << o3 << endl;
    cout << o4 << endl;
    return 0;
}