#include<iostream>
using namespace std;

int main()
{
    //control structures
    int age;
    cin>>age;

    if(age=18)
    {
        cout<<"Just legal"<<endl;
    }

    else if(age<18)
    {
        cout<<"non legal"<<endl;
    }

    else
    {
        cout<<"jfohpihsopignsOgspgSN"<<endl;
    }



    switch (age)
    {
    case 18:
        /* code */
        cout<<"You are 18"<<endl;
        break;

    case 2:
        cout<<"You are 2"<<endl;
        break;
    
    default:
        cout<<"No special cases"<<endl;
        break;
    }
    return 0;
}