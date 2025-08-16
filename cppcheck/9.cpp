#include <iostream>
using namespace std;

// buggy code
void *convert(int *ptr)
{
    return (void *)ptr;
}

// corrected code
// Issue: 
// consequence: 
// Fix:
// void *convert(int *ptr)
// {
//     return (void *)ptr;
// }

int main()
{
    /* int x = 2;
    int *p = &x;
    cout << convert(p); */

    return 0;
}