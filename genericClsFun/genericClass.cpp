#include <iostream>
using namespace std;

template <class clsT0, class clsT1>
class myclass
{ // when passing default arguments start with right side->"template <class clsT0=string, class clsT1=int>class myclass"
    clsT0 p1;
    clsT1 p2;
    clsT0 p3;
    char p4;

public:
    myclass(clsT0 ip1, clsT1 ip2, clsT0 ip3, char ip4) : p1(ip1), p2(ip2), p3(ip3), p4(ip4) {}
    void display()
    {
        cout << "p1 = " << p1 << " & p2 = " << p2 << " & p3 = " << p3 << " & p4 = " << p4 << endl;
    }
};

int main()
{
    // myclass<int> intob(1,2);
    // intob.display();

    // myclass<string> strob("hello !","! world");
    // strob.display();

    // myclass<string,int> personob("Ram",40,1001);
    // personob.display();

    myclass<string, int> personob2("john", 39, 200, 'm'); // myclass<int,string> personob3(239,"qwer",1,'f');
    personob2.display();

    return 0;
}

// generic class overloading
/*
#include <iostream>
using namespace std;

template <class clsT0, class clsT1>class myclass{
    clsT0 p1;
    clsT1 p2;
    clsT0 p3;
    char p4;
    public:
    myclass(clsT0 ip1,clsT1 ip2,clsT0 ip3,char ip4):p1(ip1),p2(ip2),p3(ip3),p4(ip4){cout<<"ge";}
    void display(){
        cout<<"p1 = "<<p1<<" & p2 = "<<p2<<" & p3 = "<<p3<<" & p4 = "<<p4<<endl;
    }
};

template <>class myclass<string,int>{
    string p1;
    int p2;
    int p3;
    char p4;
    public:
    myclass(string ip1,int ip2,int ip3,char ip4):p1(ip1),p2(ip2),p3(ip3),p4(ip4){cout<<"ovge";}
    void display(){
        cout<<"p1 = "<<p1<<" & p2 = "<<p2<<" & p3 = "<<p3<<" & p4 = "<<p4<<endl;
    }
};

int main()
{
    myclass<int,string> personob1(33,"john",2,'m');
    personob1.display();
    myclass<string,int> personob2("ramu",39,1,'m');
    personob2.display();


    return 0;
}
*/