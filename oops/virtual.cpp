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
    
     void display()
    {
        cout<<"person"<<endl;
        // cout << name << " " << age << endl;
    }
};

class Student : virtual public Person
{
private:
    char g;

public:
    // Student(string in, int ia, char ig)
    // {
    //     name = in;
    //     age = ia;
    //     g = ig;
    // }
   
    void display()
    {
        cout<<"student"<<endl;
        // cout << name << " " << age << " " << g << endl;
    }
};

class farmer : virtual public Student
{
private:
    char g;

public:
    // Student(string in, int ia, char ig)
    // {
    //     name = in;
    //     age = ia;
    //     g = ig;
    // }
   
    void display()
    {
        cout<<"farmer"<<endl;
        // cout << name << " " << age << " " << g << endl;
    }
};

class doctor : public Student,public farmer
{
private:
    char g;

public:
    // Student(string in, int ia, char ig)
    // {
    //     name = in;
    //     age = ia;
    //     g = ig;
    // }
   
    void display()
    {
        cout<<"doc"<<endl;
        // cout << name << " " << age << " " << g << endl;
    }
};


int main()
{
//     Person p;
//     p.display();
    // Student s;
    // s.display();
    // farmer f;
    // f.display();
    doctor d;
    d.display();


    return 0;
}