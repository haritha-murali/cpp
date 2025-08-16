#include <iostream>
// #include <exception>
#include <stdexcept>

using namespace std;

int main()
{
    try
    {
        // throw "string exception outer";      //goto line no.25
        try
        {
            throw "string exception inner";     //goto line no.18
        }
        catch (const char *error)
        {
            cout << "exception in inner block-->" << error << endl;
            // throw;                           //goto line no.26
            // throw runtime_error(error);      //goto line no.29
        }
        throw "string exception outer";         //goto line no.26
    }
    catch (const char *error)
    {
        cout << "exception in outer block-->" << error << endl;
    }
    catch (...)
    {
        cout << "unexpected exception in outer block" << endl;
    }

    return 0;
}