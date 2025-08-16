#include <stdio.h>

// buggy code
// void example()
// {
//     char c = 0x80;
//     int i = 0 | c;
//     if (i & 0x8000)
//     {
//         printf("Unexpected behavior\n");
//     }
// }

// corrected code
// Issue: it is two issues,
// style: Operator '|' with one operand equal to zero is redundant. [badBitmaskCheck], Condition 'i&0x8000' is always true [knownConditionTrueFalse]
// warning: When using 'char' variables in bit operations, sign extension can generate unexpected results. [charBitOp]
// consequence: 
// Fix:
void example()
{
    char c = 0x80;
    int i = 0| c;
    if (i & 0x8000)
    {
        printf("Unexpected behavior\n");
    }
}

int main()
{
    example();

    return 0;
}