#include <iostream>
using namespace std;

void f1(int var);  // pass by value-make a copy f1(x)
void f2(int *ptr); // pass by pointer-f2(&x) or f2(p)
void f3(const int &ptr); // pass by reference-f3(x) or f3(*p)

int main()
{
    int x = 2;
    int *p = &x;

    f1(x);
    f2(p);
    f3(*p);

    return 0;
}

void f1(int var)
{
    cout << "var" << var << endl;
}

void f2(int *ptr)
{
    if (ptr != nullptr)
    {
        cout << "ptr" << *ptr << endl;
    }
    else
    {
        cout << "ptr is NULL" << endl;
    }
}

void f3(const int &ptr)
{
    cout << "ref" << ptr << endl;
}