#include <iostream>
#include <iomanip> //manipulators header file

using namespace std;

// custom manipulator functions
ostream &myostream(ostream &myoutput)
{
    cout << "My name is ";
    return myoutput;
}

istream &myistream(istream &myinput)
{
    cout << "Enter your name: " << endl;
    return myinput;
}

int main()
{
    // displaying boolean values
    bool x;
    cin.setf(ios::boolalpha);
    cout.setf(ios::boolalpha);
    cin >> x;
    cout << x << endl;

    // set positive/not
    cout.setf(ios::showpos);
    cout << -10 << endl;
    cout << 10 << endl;

    // set precision
    cout.precision(4);
    cout << 123.456 << endl;
    cout << 123456 << endl; // effect only float numbers

    // min field width to be used
    cout.width(5);
    cout << "hii" << endl;
    cout << "Hello world" << endl; // if string length>width passed, will not truncate

    // fill truncated spaces by '*'
    cout.fill('*');
    cout.width(5);
    cout << "hii" << endl;
    cout << "Hello world" << endl;

    // fill truncated spaces by '*' as postfix
    cout.setf(ios::left);
    cout.width(5);
    cout << "hii" << endl;
    cout << "Hello world" << endl;

    // manipulators
    cout << hex << 10 << endl;
    cout << 15 << endl; // has effect for new line
    cout << setw(15) << setfill('#') << "Hello World!" << endl;
    cout << "Sdfghj"; // no effect for new line

    // custom manipulator functions
    string name;
    cin >> myistream >> name;
    cout << myostream << name << endl;

    return 0;
}