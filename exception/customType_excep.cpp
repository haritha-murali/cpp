#include <iostream>
#include <exception>
// #include <stdexcept>

using namespace std;

// user defined exception.ie, user defined class for exception
class overspeed : public exception
{
    double speed;

public:
    const char *what() // overloaded what method using class overspeed
    {
        return "check car speed!";
    }
    void getSpeed()
    {
        cout << "your car speed is " << speed << endl;
    }
    void setSpeed(double ispeed)
    {
        this->speed = ispeed;
    }
};

// class where can throw the exception
class car
{
    double speed;

public:
    car()
    {
        speed = 0;
        cout << "speed is " << speed << endl;
    }
    void accelerate()
    {
        for (;;)
        {
            speed += 50;
            cout << "speed is " << speed << endl;
            if (speed >= 250) // exceeds limit should throw an exception. the exception throwing object is of type overspeed class
            {
                overspeed s;
                s.setSpeed(speed); // pass speed of car to the object of overspeed class
                throw s;
            }
        }
    }
};

int main()
{
    car c;
    try
    {
        c.accelerate();
    }
    catch (overspeed &s)
    {
        cout << "exception occured-->";
        cout << s.what() << endl;
        s.getSpeed();
    }

    return 0;
}