#include <iostream>
using namespace std;

int globalvar;

void f()
{
    int i = 0;
    int localvar = 1;
    static int staticvar;
    cout << globalvar++ << " " << localvar++ << " " << staticvar++ << " " << i++ << endl;

    if (i < 4)
    {
        cout << globalvar << " " << localvar << " " << staticvar << " " << i << endl;
    }
}

void f1(){
    static int x=2;
    cout<<"x="<<x<<endl;
    x++;
    cout<<"x="<<x<<endl;
}

int main()
{
    f();
    f();
    f1();
    f1();

    return 0;
}