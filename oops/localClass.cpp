#include <iostream>
#include <string>

using namespace std;

void DetailsList(const string &in, int ia);
string iname(const string &in);
int iage(int ia);

int main()
{
    string in;
    int ia;
    cout << "Enter name & age: " << endl;
    cin >> in >> ia;
    iname(in);
    iage(ia);
    DetailsList(in, ia);

    return 0;
}

void DetailsList(const string &in, int ia)
{
    class Student
    {
    public:
        string name;
        int age;
        void show() const
        {
            cout << name << " " << age << endl;
        }
    };
    Student s1;
    s1.name = iname(in);
    s1.age = iage(ia);
    s1.show();
}

string iname(const string &in)
{
    return in;
}
int iage(int ia)
{
    return ia;
}