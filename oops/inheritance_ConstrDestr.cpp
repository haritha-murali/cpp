// special function which has no return type & same name as class. create when object creates
// used to initialise private properties of class
// default constructor is present always with no statements inside
// when creating a constructor with parameter, c++ will not call default constructor- "Human obj1;" is not valid

#include <iostream>
#include <string>

using namespace std;

class Human
{
public:
    Human()
    {
        cout << "base constructor called" << endl;
    }

    ~Human()
    {
        cout << "base distructor called" << endl;
    }
    void s(){
        cout<<"qwer"<<endl;
    }
};

class DHuman : public Human
{
public:
    DHuman()
    {
        cout << "derived constructor called" << endl;
    }

    ~DHuman()
    {
        cout << "derived distructor called" << endl;
    }
    void s(){
        cout<<"ucnuj"<<endl;
    }
};

int main()
{
    Human *h2=new DHuman();
    h2->s();
    DHuman h1;

    return 0;
}