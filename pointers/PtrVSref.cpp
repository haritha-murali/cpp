#include <iostream>
using namespace std;

int main()
{
    int x=10;
    //int y=20;
    int *p=&x;
    int *p1=p;
    cout<<x<<" "<<p<<" "<<*p<<" "<<p1<<" "<<*p1<<" "<<endl;

    //pass by pointer
    int a=2;
    int b=3;
    int *p2=&a;
    cout<<a<<" "<<p2<<" "<<*p2<<endl;
    p2=&b;
    cout<<b<<" "<<p2<<" "<<*p2<<endl;

    //pass by reference
    int &r1=a;      //r1 is a reference to a. ie, r1 and a refer to the same memory location. Any change to r1 affects a, and vice versa
    cout<<a<<" "<<&a<<" "<<r1<<" "<<&r1<<endl;
    r1=b;           //assigns the value of b to a. but this does NOT make r1 refer to b (r1 is still pointing to memory location of a)
    cout<<b<<" "<<&b<<" "<<r1<<" "<<&r1<<endl;

    return 0;
}