//when using pointers as data members or pointers as objects: should do dynamic memory allocation:-
//then copying obj2 to obj1 (byte by byte copy), memory address of obj1 copies to obj2. So both objects points to same memory address.
//Therefore, COPY CONSTRUCTOR: called when copying objects of class
//create separate memory for new object
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string in, int ia)
    {
        cout<<"con"<<endl;
        name =in;
        age = ia;
    }
    Person(const Person &p){
        cout<<"copy con"<<endl;
        name=p.name;
        age=p.age;
    }
    void change(string in, int ia)
    {
        name = in;
        age = ia;
    }
    void show()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    Person *p1=new Person("asdf", 21);
    p1->show();
    Person *p2=new Person(*p1);
    p2->show();
    p1->change("itmjivtr",12);
    p1->show();
    p2->show();

    return 0;
}