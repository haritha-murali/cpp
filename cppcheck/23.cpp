#include <iostream>

// buggy code
// cppcheck error id: error: Memory is allocated but not initialized: adcValues [uninitdata]
// cppcheck error details: This is a error in cppcheck, saying memory is allocated, but not initialised. So reading uninitialised data will give garbage value
// error understanding: when reading data from uninitialised memory will contain garbage values.
// c/c++ concept: Any memory allocated, should initialised with some value. otherwise it contains garbage values & program misleads while reading data from uninitialised memory.
// fix: initialise the allocated memory with some values
int main()
{
    int *adcValues = new int[5]; // Not initialized
    *adcValues = 10;
    std::cout << adcValues[0] << std::endl; // Undefined value
    delete[] adcValues;
    return 0;
}