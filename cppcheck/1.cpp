#include <iostream>
#include <string.h>
using namespace std;

// buggy code
// void f(string p1){
//     cout<<p1.c_str();
// }

// corrected code
// Issue: it is a performance issue,
// performance(time complexity-slow in execution): Function parameter 's' should be passed by const reference. [passedByValue]
// consequence: when creating an object (it is very big), therefore creating reference(same parameter passed) is better other than creating copy of variable/data members again (pass by refernce). Unless & until member function wants to modify the data members use const always. 
// Fix: use const char &
void f(const string &p1){
    cout<<p1.c_str();
}


int main()
{
    char p[]="hello world";
    string p1=p;
    f(p1);

    return 0;
}

