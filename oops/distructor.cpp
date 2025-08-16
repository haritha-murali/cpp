// special function which has no return type & same name as class. create when object creates
// used to initialise private properties of class
// default constructor is present always with no statements inside
// when creating a constructor with parameter, c++ will not call default constructor- "Human obj1;" is not valid

#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
    string name;
    int age;

public:
    Human()
    {
        name = "noname";
        age = 0;
        cout << "default constructor called" << endl;
    }
    
    ~Human(){
        cout<<"distructor called"<<endl;
    }

    void show()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    Human h1;   //h1 object is defined in stack, so free automatically
    h1.show();

    Human *h2;  //h2 object is dynamically allocated, so should release memory once used
    h2=new Human();
    h2->show();
    delete h2;
    
    return 0;
}