// runtime anomalies handling by exception mechanism
// c++ exceptions is an exceptional circumstance that arises when a program is running
// passing control from one part of program to another while unexpected situation comes. so that program doesnot crash/misbehave
// try: program snippet which is prone to exception will place inside this (as per developer logic)
// catch: program will catch the throwed exception & execute exceptional handler function
// throw: throw exception by keyword 'throw' if some exceptional condition (throw=divide by zero occured)

#include <iostream>
// c++ provides std exceptions. defined in exception.h header file
// exception class derived from this header-logic error & runtime error. these includes in stdexcept
// stdexpect contain this exception header
#include <exception> //base class of all exceptions
#include <stdexcept> //derived class foor std exceptions

using namespace std;

int main()
{
    int a = 10, b = 0;
    int c = 0;
    int *ptr = nullptr;
    try
    {
        if (b == 0)
        {
            throw "Divide by zero error occured!"; // string to throw the exception, once reached throw, control automatically pass to catch block
        }
        if (ptr == nullptr)
        {
            throw runtime_error("Null pointer derefernce error occured!");
        }
        c = a / b;
        cout << c << endl;
        cout << *ptr << endl;
    }
    catch (const char *e) // exception type to catch block to handle
    {
        cout << "exception occured-->" << e << endl;
    }
    catch (runtime_error &error) // object of derived class stdexcept
    {
        cout << "exception occured-->" << error.what() << endl;
    }
    catch (...) // can catch any type of exception-no need to specify the type of exception. So easy if the type of exception is unknown
    {
        cout << "some exception occured" << endl;
    }

    return 0;
}