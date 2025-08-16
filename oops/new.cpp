#include <iostream>
using namespace std;
// Parent class, Base Class, Super Class
class Base {
public:
    // Default constructor
    Base() {
        cout << "Default constructor called" << endl;
    }
// Constructor with one parameter
    Base(int x) {
        cout << "Constructor with one parameter called: x = " << x << endl;
    }
// Constructor with two parameters
    Base(int x, int y) {
        cout << "Constructor with two parameters called: x = " << x << ", y = " << y << endl;
    }
};
// Driver code
int main() {
    Base b;         // Calls default constructor
    Base b2(2);     // Calls constructor with one parameter
    Base b3(3, 4);  // Calls constructor with two parameters
return 0;
}