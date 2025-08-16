#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
    int marks;
    // int showMarks(){
    //     return marks-5;
    // }  

public:
    string name = "noname"; // will overwrite when defining obj initialisation
    char gender;
    int age;
    void display()
    {
        cout << "name: " << name << endl;
        cout << "gender: " << gender << endl;
        cout << "age: " << age << endl;
    }
    void profile();
    void setMark(int m)     //Set member function is needed to set values to private data members, since it can't access from outside of class
    {
        marks = m;
    }
    int getMarks();         //display private values
};

// string Human::name="noname";       //invalid definition. data members can't define outside of class with ::
void Human::profile()
{
    cout << "This is the profile of " << Human::name << endl;
}

int Human::getMarks()
{
    return marks;
    //showMarks();
}

int main()
{
    /*2 method to create object.
    1.specify class name & object name
    2.using new keyword->obj allocate in heap->new will return memory addr of created obj, so need pointer of type class
    */
    Human obj1;                // object created & stored in stack
    Human *obj2 = new Human(); // object created & stored in heap. Need to use new to create object dynamically

    obj1.name = "Ram";
    obj1.gender = 'M';
    obj1.age = 29;
    obj1.display();
    obj1.profile();
    obj1.setMark(45);
    cout << "Marks= " << obj1.getMarks() << endl << endl;

    obj2->name = "Ram";
    obj2->gender = 'M';
    obj2->age = 29;
    obj2->display();
    obj2->profile();
    obj2->setMark(45);
    cout << "Marks= " << obj2->getMarks() << endl << endl;

    return 0;
}