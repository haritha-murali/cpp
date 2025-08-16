#include <iostream>
using namespace std;

/*
💡C++ Promotion Rules (Simplified):
Types involved	    Resulting type
int + float	        float
int + double	    double
float + double	    double
short + int	        int
char + int	        int
*/

fun(float a, int b)
{
    return ((float)a + b);
    // cout<<c;
}

int main()
{
    int a = 2;
    float b = 2.3;
    cout << a + b << endl;  //operation involves mixed types, the lower type is implicitly converted to the higher type before the operation
    int sum = b;
    cout << sum << endl;
    cout << fun(2.1, 2) << endl;

    bool x = -15;
    int y = true;
    cout << x << endl;
    cout << y << endl;

    int x1 = 123456789;
    double y1 = x1;
    cout << y1 << endl;

    return 0;
}