#include <iostream>
// #include <exception>
#include <stdexcept>

using namespace std;

// no parameter in throw function can't throw exception
void f1() throw(int, char, runtime_error, const char *, bool)
{
    // throw 10;
    // throw 'a';
    // throw runtime_error("qwert");
    //throw "ercc";
    throw true;
}

int main()
{
    try
    {
        f1();
    }
    catch (int error)
    {
        cout << error << endl;
    }
    catch (char error)
    {
        cout << error << endl;
    }
    catch (runtime_error &error)
    {
        cout << error.what() << endl;
    }
    catch (...)
    {
        cout << "some error" << endl;
    }

    return 0;
}