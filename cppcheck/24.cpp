#include <iostream>

// Buggy code
// cppcheck error id: error: Uninitialized variable: pos.y [uninitvar], error: Uninitialized struct member: pos.y [uninitStructMember]
// cppcheck error details: Struct data member is used withput being initialised
// error understanding: data member pos.y is used before assigning/initialising a value, leads to undefined behaviour.
// c/c++ concept: Default member initialization or proper object initialization
// fix: Initialize all structure members before use
struct Coordinates
{
    int x;
    int y;
};

int main()
{
    Coordinates pos;
    pos.x = 10;
    pos.y = 5;
    std::cout << "Position: (" << pos.x << ", " << pos.y << ")" << std::endl; // y is uninitialized
    return 0;
}