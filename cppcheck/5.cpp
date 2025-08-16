#include <iostream>

// buggy code
/* 
void checkValue(int x)
{
    if (x > 11)
    {
        if (x > 10)
        {
            std::cout << "x is greater than 10" << std::endl;
        }
    }
} 
*/

// corrected code
// Issue: it is a style issue,
// style: where Condition 'x>10' is always true [knownConditionTrueFalse]
// consequence: 
// Fix: if x>11, which means x>10. ie, if 1st if condition is true, 2nd if condition will always true, therefore, 2nd condition is redundant
void checkValue(int x)
{
    if (x > 11)
    {
        std::cout << "x is greater than 10" << std::endl;
        /* if (x > 10)                      //commented cppcheck error id- [knownConditionTrueFalse]. [HM]
        {
        std::cout << "x is greater than 10" << std::endl;
        } 
        */
    }
}

int main()
{
    checkValue(10);

    return 0;
}