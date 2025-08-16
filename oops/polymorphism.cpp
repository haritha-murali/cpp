#include <iostream>
#include <string>

using namespace std;

//class with one/more PURE VIRTUAL method is known as ABSTRACT class
//can't create object for abstract class
//abstarct is an incomplete class which can be used as foundation for derived class
class Person
{
protected:
    string name;
    int age;

public:
    virtual void set(string in, int ia)
    {
        name = in;
        age = ia;
    }
    virtual void display()=0;
    // {
    //     cout << name << " " << age << endl;
    // }
};

class Student : public Person
{
private:
    char g;

public:
    Student(string in, int ia, char ig)
    {
        name = in;
        age = ia;
        g = ig;
    }
    //override functions
    void set(string in, int ia, char ig)    //this is not exactly override function, it is overload function
    {
        name = in;
        age = ia;
        g = ig;
    }
    void display()
    {
        cout << name << " " << age << " " << g << endl;
    }
};

//outside function used to see the function overriding take parameter of type Base class 'Person'
void caller(Person &eg)
{
    eg.display();
}

int main()
{
    Person p;
    p.set("qwqwertye", 13);
    p.display();

    Student s("ertyuil", 12, 's');
    s.display();

    s.set("asdfgh", 432, 'w');
    s.display();

    caller(s);  //call display in student because referring to student object 's'
    caller(p);  //call display in person because referring to person object 'p'

    return 0;
}