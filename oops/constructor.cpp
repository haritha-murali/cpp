/* what: 
    1) special member function-same name as of class
    2) no return type
    3) call automatically when oject is being created in consumer of class 
*/
/* what do: 
    1) realize real sw objects after reading associated class design
    2)allocate memory to whole object & all its data member present inside it
    3) create pointer variable, which is responsible to hold the mem.addr of current obj who has called presently the code of any member fun 
       c/c++ runtime set mem addr of this pointer when mem.fun. call is made. pointer variable in c++ (p) used with arrow operator p-> similar to this->
    4) initialize values to those data members that must to be initialised else obj is being used by c++ program will be inmature/wrong/invalid. 
       later data mem. can initialised in other mem.fun./global fun. as need
*/

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
    //constructor overloading
    //Human(){}     //default constructor-by compiler
    Human()     //explicit zero parameterized consructor
    {
        name = "noname";
        age = 0;
        cout << "explicit zero parameterized consructor called" << endl;
    }
    Human(string iname)
    {
        name = iname;
        age = 0;
        cout << "constructor with name called" << endl;
    }
    Human(int iage)
    {
        name = "noname";
        age = iage;
        cout << "constructor with age called" << endl;
    }
    Human(string iname, int iage)
    {
        name = iname;
        age = iage;
        cout << "constructor with both called" << endl;
    }
    Human(string iname="noname", int iage=0)
    {
        name = iname;
        age = iage;
        cout << "constructor with both parameters called, by passing values specifies-OVERLOADED CONSTRUCTORS" << endl;
    }

    void show()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    Human obj1;
    obj1.show();

    Human obj2("ram");
    obj2.show();

    Human obj3(23);
    obj3.show();

    Human obj4("ram", 23);
    obj4.show();
    
    Human obj5;
    obj5.show();

    return 0;
}