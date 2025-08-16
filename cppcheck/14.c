#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 1
int add(int x);

int main()
{

    int x = 9; // dead code, MISRA C 2012 Rule 2.2 violation
    int r = add(x); //pass a value that may vary realistically
    if (r)
    {
        cout<<"non-zero"<<endl;
        return SUCCESS;
    }
    cout<<"zero"<<endl;

    return 0;
}

int add(int x)
{
    //simulate real logic, eg: return 0 if input is zero
    if(x == 0)
    {
        return 0;
    }
    return x;
}