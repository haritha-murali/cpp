/* #include <iostream>
#include <string>
#include "opOverload.cpp"

using namespace std;

int main()
{
    Shape s1(1, 2);
    cout << "Area of s1 = " << s1.area() << endl;
    Shape s2(2, 3);
    cout << "Area of s2 = " << s2.area() << endl;

    Shape s3;
    s3 = s1 + s2;
    cout << "Area using operator overloading '+' by normal member function = " << s3.area() << endl;

    Shape s4;
    s4 = s1 * s2;
    cout << "Area using operator overloading '*' by normal member function defined outside class = " << s4.area() << endl;

    Shape s5;
    s5 = s1 - s2;
    cout << "Area using operator overloading '-' by friend member function with return type = " << s5.area() << endl;

    s5 -= 1;
    cout << "Area using operator overloading '-' by friend member function without return type = " << s5.area() << endl;

    s5 += 1;
    cout << "Area using operator overloading '+' by normal member function without return type = " << s5.area() << endl;

    ++s1;
    cout << "prefix operator '+': " << s1.area() << endl;
    s1--;
    cout << "prefix operator '-': " << s1.area() << endl;

    return 0;
} */

#include <iostream>

using namespace std;

class Shape
{
    int value;

public:
    Shape() {}
    Shape(int ivalue) : value(ivalue) {}
    int show()
    {
        return value;
    }

    // 1. using normal member function with return type-parameter for current object will pass implicitly
    Shape operator+(Shape &s)
    {
        Shape temp;
        temp = value + s.value;
        return temp;
    }

    // 2.using friend member function with return type-parameter for current object should pass explicitly
    friend Shape operator-(Shape &s, Shape &model);

    // 3.using normal member function without return type, shorthand operator
    void operator+=(int iv)
    {
        value += iv;
    }

    // 4.using friend member function with return type, shorthand operator
    friend void operator-=(Shape &s, int iv);

    // 5.using normal member function without return type, prefix
    void operator--()
    {
        value -= 1;
    }

    // 6.using friend member function without return type, prefix
    friend void operator++(Shape &s);

    // 7.using normal member function with return type, postfix
    Shape operator--(int)
    {
        Shape dup;
        value -= 1;
        return dup;
    }

    // 8.using friend member function with return type, postfix
    friend Shape operator++(Shape &s, int);
};

Shape operator-(Shape &s, Shape &model)
{
    Shape temp1;
    temp1 = s.value - model.value;
    return temp1;
}

void operator-=(Shape &s, int iv)
{
    s.value -= iv;
}

void operator++(Shape &s)
{
    s.value += 1;
}

Shape operator++(Shape &s, int)
{
    Shape dup(s);
    s.value += 1;
    return dup;
}

int main()
{
    Shape s1(10);
    cout << "s1 = " << s1.show() << endl;

    Shape s2(2);
    cout << "s2 = " << s2.show() << endl;

    cout << "Operator Overloading\n---------------------------------------" << endl;

    // 1. using normal member function with return type-parameter for current object will pass explicitly
    Shape s3;
    s3 = s1 + s2;
    cout << "using member function with return type: s3 = " << s3.show() << endl;

    // 2.using friend member function with return type-parameter for current object should pass explicitly
    s3 = s1 - s2;
    cout << "using friend member function with return type: s3 = " << s3.show() << endl;

    // 3.using normal member function without return type, shorthand operator
    s3 += 3;
    cout << "using member function without return type, shorthand operator: s3 = " << s3.show() << endl;

    // 4.using friend member function with return type, shorthand operator
    s3 -= 2;
    cout << "using friend member function without return type, shorthand operator: s3 = " << s3.show() << endl;

    // 5.using normal member function without return type, prefix
    --s3;
    cout << "using member function without return type, prefix: s3 = " << s3.show() << endl;

    // 6.using friend member function without return type, prefix
    ++s3;
    cout << "using friend member function without return type, prefix: s3 = " << s3.show() << endl;

    // 7.using normal member function with return type, postfix
    s3--;
    cout << "using member function with return type, postfix: s3 = " << s3.show() << endl;

    // 8.using friend member function with return type, postfix
    s3++;
    cout << "using friend member function with return type, postfix: s3 = " << s3.show() << endl;

    return 0;
}
