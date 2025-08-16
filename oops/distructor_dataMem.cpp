#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
    string *name=new string;
    int *age;
    char gen;

public:
    Human(string iname, int iage, char igen)
    {
        //name = new string;
        age = new int;
        *name = iname;
        *age = iage;
        gen = igen;
    }

    ~Human()
    {
        delete name;
        delete age;
        cout << "distructor called" << endl;
    }

    void show()
    {
        cout << *name << " " << *age << " " << gen << endl;
    }
};

int main()
{
    Human *h1=new Human("fdsaq", 12,'m');
    h1->show();
    delete h1;

    return 0;
}