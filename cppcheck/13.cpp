#include <cstdlib>
#include <iostream>
using namespace std;

// buggy code
// void f3()
// {
//     int *ptr = new int[10];
// }

// corrected code
// issue: it is two issues,
// error: Memory leak: data [memleak]
// style: Variable 'ptr' can be declared as pointer to const [constVariablePointer], Variable 'ptr' is assigned a value that is never used [unreadVariable], Variable 'ptr' is allocated memory that is never used [unusedAllocatedMemory]
// concequence:
// Fix: By using same set of memory allocation & deallocation will resolve the issue, initialise & use the allocated memory.
void f3()
{
    int *ptr = new int[10];
    *(ptr) = 10;
    delete[] ptr;
}

int main()
{
    f3();

    return 0;
}