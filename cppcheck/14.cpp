#include <iostream>

#define SUCCESS 1

int add(int x);

int main()
{
    int r = add(0); // pass a value that may realistically vary
    if (r != 0)
    {
        std::cout << "Non-zero result\n";
        return SUCCESS;
    }

    std::cout << "Zero result\n";
    return 0;
}

int add(int x)
{
    // Simulate real logic, e.g. return 0 if input is zero
    if (x == 0)
    {
        return 0;
    }
    return x;
}
