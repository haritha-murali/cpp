#include <iostream>

// buggy code
// cppcheck error id: warning: Using 'sizeof' on array given as function argument returns size of a pointer. [sizeofwithsilentarraypointer]
// cppcheck error details: This is warning in cppcheck, saying using sizeof(buffer) on array given as function argument returns size of a pointer.
// Error understanding: when passing array as function argument, array will decays to pointer. So while calling sizeof(buffer) will return the sizeof pointer, not the array.
// c/c++ concept: Pointer decay in function parameters-once array is passed as function parameters, it immediately decays to lower level internal concept called pointers.
// Fix: Pass size explicitly instead of relying on sizeof inside function
int getBufferSize(char buffer[100])
{
    return sizeof(buffer); // Returns pointer size, not 100
}

/* int getBufferSize(const char buffer[100],int size)
{
    return size; // Returns pointer size, not 100
} */

int main()
{
    char uartBuffer[100];
    std::cout << "Buffer size: " << getBufferSize(uartBuffer) << std::endl;
    // std::cout << "Buffer size: " << getBufferSize(uartBuffer,sizeof(uartBuffer)) << std::endl;
    return 0;
}
