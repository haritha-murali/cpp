#include <cstdlib>
#include <iostream>
using namespace std;

// buggy code
// void example(int x)
// {
//     int i = 0;
//     if (x > 0)
//     {
//         for (int j = 0; j < 10; ++j)
//         {
//             i += j;
//         }
//     }
// }

// corrected code
// issue: it is style issues,
// style: The scope of the variable 'i' can be reduced. [variableScope], Variable 'i' is assigned a value that is never used. [unreadVariable]
// concequence:
// Fix: reducing the scope of variable i inside the if condition only, use i to print
void example(int x)
{
    if (x > 0)
    {
        int i = 0;
        for (int j = 0; j < 10; ++j)
        {
            i += j;
        }
        cout << i;
    }
}

int main()
{
    example(10);

    return 0;
}