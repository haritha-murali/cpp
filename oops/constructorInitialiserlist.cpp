#include <iostream>
#include <math.h>

using namespace std;

class CartesianCoordinate
{
private:
    int x;
    int y;

public:
    CartesianCoordinate(int ix, int iy)                     //constructor by passing parameters
    {
        x = ix;
        y = iy;
    }
    CartesianCoordinate(int ix, int iy)                     //constructor by passing parameters using this pointer
    {
        this->x = ix;
        this->y = iy;
    }
    CartesianCoordinate(int ix, int iy):x(ix),y(iy){}       //constructor by passing parameters using constructor initialiser list

    void distance()
    {
        int z = (x * x) + (y * y);
        cout << sqrt(z) << endl;
    }
};

int main()
{
    CartesianCoordinate point(3, 4);
    point.distance();

    return 0;
}