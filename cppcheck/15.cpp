#include <iostream>

//buggy code
// cppcheck error ID: clarifyCalculation. style: Clarify calculation precedence for '+' and '?'. [clarifyCalculation]
// cppcheck error details in concise (refer from cppcheck --doc)
// Error understanding in concise: 
// C/C++ concept involved to rectify error, specified concisely: Even though precedence rules resolve it, always use parentheses to clarify intent and avoid warnings like clarifyCalculation.
/* int evaluateSensor(int temp, int pressure, int ok, int fail)
{
    return temp + pressure ? ok : fail;
} */

int evaluateSensor(int temp, int pressure, int ok, int fail)
{
    return (temp + pressure) ? ok : fail;
}

int main()
{
    int status = evaluateSensor(25, 30, 1, 0);
    std::cout << "Sensor Status: " << status << std::endl;
    return 0;
}