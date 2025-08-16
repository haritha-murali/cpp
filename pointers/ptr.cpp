// pointers

#include <iostream>
using namespace std;

int main()
{
    short int x = 10;
    short *p=nullptr;
    p=new short(x);
    cout << *p << endl;
    cout << p << endl;
    cout << sizeof(p) << endl;
    cout << sizeof(*p) << endl;
    delete p;
    cout<<*p<<endl;

    return 0;
}