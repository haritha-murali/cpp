#include <cstdlib>
#include <iostream>
using namespace std;

// buggy code
// void f2()
// {
//     int *data = new int[10];
//     free(data);
// }

// corrected code
// Issue: it is two issues,
// error: Mismatching allocation and deallocation: data [mismatchAllocDealloc], style: Variable 'data' is allocated memory that is never used. [unusedAllocatedMemory]
// concequence: The memory was allocated explicitly using a set of memory management functions, and deallocated using a different set. Here memory allocated with new(), and then deallocated with the free() operator. When the memory management functions are mismatched, the consequences may be as severe as code execution, memory corruption, or program crash.
// Fix: By using same set of memory allocation & deallocation will resolve the issue.
void f2()
{
    int *data = new int[10];
    for(int i=0;i<10;i++){
        *(data+i)=2;
        cout<<*(data+i)<<endl;
    }
    delete[] data;
}

int main()
{
    f2();

    return 0;
}