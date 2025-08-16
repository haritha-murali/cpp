#include "4.h"
#include <iostream>

/* void process(float b,int a)
{ // Definition mismatch
    std::cout << "a: " << a << ", b: " << b << std::endl;
} */

void process(int a,float b)
{ // Definition mismatch
    std::cout << "a: " << a << ", b: " << b << std::endl;
}

int main()
{
    process(42, 3.14f);
    
    return 0;
}