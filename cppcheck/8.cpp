#include <iostream>
using namespace std;

// buggy code
// void printMessage(const char *message = nullptr)
// {
//     std::cout << message << std::endl;
// }

// corrected code
// issue: it is a warning,
// warning: Possible null pointer dereference if the default parameter value is used: message [nullPointerDefaultArg]
// consequence: null pointer dereference with either default arg/passed arg is not valid-program crash.
// Fix: perform a nullptr check before executing statements
void printMessage(const char *message = nullptr)
{
    if (message != nullptr)
        std::cout << &message << std::endl;
}

int main()
{
    printMessage();

    return 0;
}