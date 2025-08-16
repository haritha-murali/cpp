#include <iostream>
#include <string>

using namespace std;

class Human
{
    string name;
    int age;
    char gen;

public:
    Human(string iname, int iage, char igen) : name(iname), age(iage), gen(igen) {}
    void display()
    {
        cout << name << " " << age << " " << gen << endl;
    }
    friend void show(Human h);
    friend int getage(Human &h, int iage);
    friend class Person;
};

class Person
{
public:
    void displayDetails(Human h)    //friend class
    {
        cout << h.name << " " << h.age << " " << h.gen << endl;
    }
};

// friend functions
int getage(Human &h, int iage) // modifying a copy of h1 inside getage(). It does not affect h1.age, because h1 is passed by value (a copy is made). Pass by refernce.
{
    h.age = iage;
    return h.age;
}

void show(Human h)
{
    cout << h.name << " " << h.age << " " << h.gen << endl;
}

int main()
{
    Human h1("Ram", 23, 'M');
    h1.display();
    show(h1);
    getage(h1, 10);
    h1.display();
    Person p;
    p.displayDetails(h1);
    getage(h1, 25);
    p.displayDetails(h1);

    return 0;
}