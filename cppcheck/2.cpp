#include <iostream>
#include <string>
using namespace std;
string f()
{
    string s = "John";
    return s.c_str(); // C++ String --> Requested to change via str() function whose work is to change C Strings in C++ to C++ strings 
                      // because C++ strings are having OOP based features / member functions for easier string maniplulation
                      // C++ String are more performace oriented C++ string are more secure (devoid of buffer overflow attack 
                      // that is C String do) --> So, in this case C++ string is unncessary chaged to be userd by string.str() function 
                      //into C String first then back into C++ string making code slow in performance and have opportunity of code redundancy
}
int main()
{
    f();
    return 0;
}