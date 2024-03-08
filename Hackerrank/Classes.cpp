#include<iostream>
using namespace std;

class stu
{
    public:
    int age;
    void i_age()
    {
        cin>>age;
    }
    void o_age()
    {
        cout<<age;
    }

    string firstname;
    void i_firstname()
    {
        cin>>firstname;
    }
    void o_firstname()
    {
        cout<<firstname;
    }

    string lastname;
    void i_lastname()
    {
        cin>>lastname;
    }
    void o_lastname()
    {
        cout<<lastname;
    }

    int standard;
    void i_standard()
    {
        cin>>standard;
    }
    void o_standard()
    {
        cout<<standard;
    }


};


int main()
{
    stu A;
    A.i_age();
    A.i_firstname();
    A.i_lastname();
    A.i_standard();

    int p,s;
    string q,r;
    p=A.o_age();
    q=A.o_firstname();
    r=A.o_lastname();
    s=A.o_standard();


    cout<<p<<endl<<r<<", "<<q<<endl<<s<<endl;
    cout<<endl;
    cout<<p<<","<<q<<","<<r<<","<<s<<endl;
        
}