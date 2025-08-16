#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    // c++ string
    string s1 = "hi";
    string s2("hello");
    cout << s1 << endl << s2 << endl;
    s1.append(" " + s2);
    cout << s1 << endl;
    s1 += s2;
    cout << s1.size() << s1 << endl;
    cout << s2.insert(2, "hy ") << endl;
    cout << s2.substr(1, 3) << endl;

    // cin separates input if whitespace/newline/tab present
    // getline()
    getline(cin, s1);
    cout << s1 << endl;

    // c string
    char s3[] = "hi", s4[] = "hello";
    cout << strlen(s3) << s3;
    strcpy(s3, s4);
    cout << strlen(s3) << s3;

    return 0;
}