#include <iostream>
#include <string.h>
using namespace std;

// void f(const char *p){
//     cout<<p;
// }

// // void f(const string &p1){
// //     cout<<p1.c_str();
// // }

// int main()
// {
//     //char p[]="dfgh";
//     string p="hha";
//     //string p1=p;
//     f(p.c_str());

//     return 0;
// }

// buggy code
// void func(string s)
// {
//     cout << s;
// }

// corrected code
// Issue: it is a performance issue,
// performance(time complexity-slow in execution): Function parameter 's' should be passed by const reference. [passedByValue]
// consequence: when creating an object (it is very big), therefore creating reference(same parameter passed) is better other than creating copy of variable/data members again (pass by refernce). Unless & until member function wants to modify the data members use const always. 
// Fix: use const char &
void func(const char &s)
{
    cout << s;
}

int main()
{
    // Fix: string object is converted back into c string and via c_str and is converted back into c++ string which causes extra time and causes performance overhead and hence is redundancy and performance error.
    char str[] = "john";
    string s2 = string(str);
    func(s2.c_str());

    return 0;
}
