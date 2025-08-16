#include <iostream>
using namespace std;

template <typename T> T mymax(T para1, T para2);
template <class T> void show(T x, int count);
template <typename T> void display(T x);
void display(int x);
template <typename T0>void print(T0 x);
template <typename T1, typename T2>void print(T1 x, T2 y);

int main()
{
    cout << mymax(2, 4) << endl;
    cout << mymax(2.3098228f, 1.292823f) << endl;

    show("qwerty", 3);
    show('a', 1);

    display("hellooii");
    display(22);
    display(123.456789);

    print(11);
    print(11,"c qwerty");

    return 0;
}

//generic function with return type & 2 parameters
template <typename T> T mymax(T para1, T para2)
{
    return ((para1 > para2) ? para1 : para2);
}

//generic function with one std data type parameter
template <class T> void show(T x, int count)
{
    while (count)
    {
        cout << x << " displayed at count = " << count << endl;
        count--;
    }
}

//explicit specialisation-overloading generic function for a specl purpose
template <typename T> void display(T x)
{
    cout<<"Inside generic function-->x="<<x<<endl;
}
void display(int x)     //another declaration===>  template <> void display<int>(int x)
{
    cout<<"Inside normal function-->x="<<x<<endl;
}

//generic function overloading with different no.of parameters
template <typename T0>void print(T0 x){
    cout<<"Generic function with one parameter--->x="<<x<<endl;
}
template <typename T1, typename T2>void print(T1 x, T2 y){
    cout<<"Generic function with two parameter--->x="<<x<<" & y="<<y<<endl;
}