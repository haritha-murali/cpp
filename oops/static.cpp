#include <iostream>
#include <string>

using namespace std;

class Human
{
public:
    static int objCount;
    static int objCount_forStaticMemFun;
    Human()
    {
        objCount++;
        objCount_forStaticMemFun++;
    }
    void show()
    {
        cout << "static member & normal member function\ntotal = " << objCount << endl;
    }
    static void display()
    { // only static members can define inside static member functions
        cout << "static member & static member function\ntotal = " << objCount_forStaticMemFun << endl;
    }
};

int Human::objCount = 0; // static data members should define outside the class
int Human::objCount_forStaticMemFun = 0;

int main()
{
    Human h1;
    Human h2;
    Human h3;
    h1.show();
    Human::display(); // static member fun should access by scope resolution operator ::

    return 0;
}