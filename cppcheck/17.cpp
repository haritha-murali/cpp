#include <iostream>

int controlLogic(int flag, int a, int b)
{
    if (flag)
        return a + 1;//, b++; // Misleading use of comma operator
    return b;
}

int main()
{
    int result1 = controlLogic(1, 5, 10);
    int result2 = controlLogic(0, 5, 10);
    std::cout << "Result1: " << result1 << std::endl;
    std::cout << "Result2: " << result2 << std::endl;
    return 0;
}