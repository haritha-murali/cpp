#include <iostream>

// buggy code
/*
void f()
{
    int unused = 42;
    std::cout << "Hello, world!" << std::endl;
}
*/

// corrected code
// Issue: it is a style issue,
// style: where Variable 'unused' is assigned a value that is never used [unreadVariable].
// consequence:
// Fix: By using that variable in some calculation/printing will resolve the issue.
/*
void f()        //commented cppcheck error id- [unusedFunction]. [HM]
{
    // int unused = 42;     //commented cppcheck error id- [unreadVariable]. [HM]
    std::cout << "Hello, world!" << std::endl;
}
*/

int main()
{
    // f();

    return 0;
}