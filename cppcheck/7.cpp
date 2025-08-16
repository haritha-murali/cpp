#include <iostream>
using namespace std;

// buggy code
// void f3()
// {
//     int *data = (int *)malloc(10 * sizeof(int));
//     data = (int *)realloc(data, 20 * sizeof(int));
//     if (data == NULL)
//     {
//     }
// }

// corrected code
// Issue: it is two issue,
// error: Memory leak: data [memleak]
// style: C-style pointer casting [cstyleCast] in malloc, realloc
// consequence: dynamically allocated memory should release after use, otherwise cause memory leak issue leads to memory fragmentation. realloc() is not compatible with memory allocated via new, and using it in C++ is strongly discouraged
// Fix: free memory allocated dynamically, change c-style memory allocation to c++ style.
void f3()
{
    int *data = new int[10];
    //data = (int *)realloc(data, 20 * sizeof(int));
    if (data == NULL)
    {
    }
    delete[] data;
}

int main()
{
    f3();

    return 0;
}