#include<iostream>
using namespace std;

int glo=6;

void sum()
{
    int a;
    cout<<glo<<endl;
}


int main()
{
    int a = 4;
    int b = 5;
    float pi=3.141;
    char c = 'u';

    sum();

    cout<<"The value of a is "<<a<<" the value of b is "<<b<<endl;
    cout<<"The value of pi is: "<<pi<<endl;
    cout<<"The value of char is: "<<c<<endl;
    cout<<glo<<endl;


    return 0;
}