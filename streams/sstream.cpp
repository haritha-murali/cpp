//string stream: to convert an int to string
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int x=10;
    stringstream sso;
    sso<<x;
    string sinput;
    sso>>sinput;
    cout<<"integer form: "<<x<<"---->adding 2:"<<x+2<<endl;
    cout<<"string form: "<<sinput<<"---->adding 2:"<<sinput+"2"<<endl;
    
    string s="40";
    stringstream sso1;
    sso1<<s;
    int y;
    sso1>>y;
    cout<<"string form: "<<s<<"---->adding 2:"<<s+"2"<<endl;
    cout<<"integer form: "<<y<<"---->adding 2:"<<y+2<<endl;

    return 0;
}