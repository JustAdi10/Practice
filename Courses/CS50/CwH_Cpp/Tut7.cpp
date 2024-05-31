#include<iostream>
using namespace std;

int c = 45;
// Scope resolution operator ::
int main()
{
    //---------SCOPE RESOLUTION----------
    // int a, b, c;
    // cin>>a>>b;
    // c = a + b;
    // cout<<c;
    
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global c is "<<::c<<endl;

    // ---------FLOAT DOUBLE ETC LITERALS-------
    // float f = 34.4;
    // double d = 34.4;

    // cout<<sizeof(34.4)<<endl;
    // cout<<sizeof(34.4f)<<endl;

    // ------REFERANCE VARIABLES-------
    // int x = 45;
    // int & y =x;
    // cout<<x<<endl;  
    // cout<<y<<endl;

    // -----TYPECASTING---------
    int a = 45;
    float b = 45.6;
    cout<<float(a)<<endl;
    cout<<int(b)<<endl;

    int c = int(b);
    cout<<(a+b)<<endl;
    cout<<(a+int(b))<<endl;


    return 0;
}