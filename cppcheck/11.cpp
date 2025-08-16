#include <cstdlib>
#include <iostream>
using namespace std;

// buggy code
// void example()
// {
//     int *data = (int *)malloc(100 * sizeof(int));
// }

// corrected code
// issue: it is two issues,
// error: Memory leak: data [memleak]
// style: C-style pointer casting [cstyleCast], Variable 'data' can be declared as pointer to const [constVariablePointer], Variable 'data' is assigned a value that is never used [unreadVariable], Variable 'data' is allocated memory that is never used. [unusedAllocatedMemory]
// concequence: The memory was allocated explicitly using a set of memory management functions, and deallocated using a different set. Here memory allocated with new(), and then deallocated with the free() operator. When the memory management functions are mismatched, the consequences may be as severe as code execution, memory corruption, or program crash.
// Fix: By using same set of memory allocation & deallocation will resolve the issue.
void example()
{
    int *data = new int[100];
    for (int i = 0; i < l; i++)
    {
        *(data + i) = 9;
    }
    delete[] data;
}

int main()
{
    example();

    return 0;
}