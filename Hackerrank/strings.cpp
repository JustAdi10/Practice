#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c;
    int p,q;

    cin>>a>>b;

    p=a.size();
    q=b.size();

    c=a+b;

    char r=a[0];
    char s=b[0];
    char x=replace(a,r,s);
    char y=replace(b,s,r);

    cout<<p<<" "<<q<<endl;
    cout<<c<<endl;
    cout<<x<<" "<<y;

}