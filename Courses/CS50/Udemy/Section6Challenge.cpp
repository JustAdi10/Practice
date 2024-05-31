#include<iostream>
using namespace std;

int main()
{
    cout<<"Hello, welcome to Frank's carpet cleaning serivice"<<endl;
    cout<<endl;

    int a,b;

    cout<<"How many small rooms would you like cleaned? ";
    cin>>a;

    cout<<"How many large rooms would you like cleaned? ";
    cin>>b;

    cout<<endl;

    cout<<"Estimate for carpet cleaning service "<<endl;
    cout<<"Number of small rooms: "<<a<<endl;
    cout<<"Number of large rooms: "<<b<<endl;
    cout<<"Price per small room: $25"<<endl;
    cout<<"Price per large room: $35"<<endl;

    int cost;

    cost=(a*25)+(b*35);

    cout<<"Cost : $"<<cost<<endl;
    cout<<"Tax: $6.6"<<endl;
    cout<<"======================================================="<<endl;
    
    float totest;
    totest=cost+6.6;

    cout<<"Total estimate: $"<<totest<<endl;
    cout<<"This estimate is valid for 30 days"<<endl;

    return 0;

}