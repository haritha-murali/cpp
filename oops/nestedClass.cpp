#include <iostream>
#include <string>

using namespace std;

class Human
{
public:
    string name;
    class Address
    {
    public:
        string hname;
        int hno;
        void show(Human h)
        {
            cout << h.name << " " << hname << " " << hno << " " << endl;
        }
    };
    Address a1;
    void display()
    {
        cout << name << " " << a1.hname << " " << a1.hno << " " << endl;
    }
};

int main()
{
    Human h1;
    h1.name = "ram";
    h1.a1.hname = "santi";
    h1.a1.hno = 231;
    h1.display();

    Human::Address a2;
    a2.hname = "qwerty";
    a2.hno = 156;
    a2.show(h1);

    return 0;
}