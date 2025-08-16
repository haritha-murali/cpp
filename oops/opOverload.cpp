#include <iostream>

using namespace std;

#define counter 5

// 1.'[]' operator overloading using normal member function
class Shape
{
    int sub[counter] = {1, 2, 3};

public:
    Shape() {}
    Shape(int isub[counter])
    {
        for (int i = 0; i < counter; i++)
        {
            sub[i] = isub[i];
        }
    }
    //1.'[]' operator overloading using normal member function
    void operator[](int pos)
    {
        cout << sub[pos] << endl;
    }
    // Shape operator[](int pos)
    // {
    //     cout << sub[pos] << endl;
    //     return *this;
    // }
};

// 2.'()' operator overloading using normal member function
class Shape1
{
    int x;
    int y;

public:
    Shape1() {}
    Shape1(int ix, int iy) : x(ix), y(iy) {cout << "constructor: " << x << " " << y << endl;}
    void show()
    {
        cout << "show: " << x << " " << y << endl;
    }
    // 2.'()' operator overloading using normal member function
    Shape1 operator()(int ix, int iy)
    {
        x = ix;
        y = iy;
        cout << "operator overloading with return type: " << x << " " << y << endl;
        return *this;
    }
    // void operator()(int ix, int iy)
    // {
    //     x = ix;
    //     y = iy;
    //     cout << "operator overloading wout return type: " << x << " " << y << endl;
    // }

    //3.'->' operator overloading using normal member function
    Shape1 *operator->(){
        return this;
    }
};

int main()
{
    // 1.'[]' operator overloading
    int arr[counter] = {10, 20, 30, 40, 50};
    Shape s1(arr);
    s1[0];
    s1[2];
    s1[4];

    // 2.'()' operator overloading
    Shape1 s1(100, 101);
    s1.show();
    s1(21, 22);
    s1.show();

    //3.'->' operator overloading
    s1->show();

    return 0;
}