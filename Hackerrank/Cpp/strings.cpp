#include<iostream>
#include<string>
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

    for(int i=0;i<=p;i++)
    {
        if(i==0)
        {
            a[i]=s;
        }
    }

    for(int i=0;i<=p;i++)
    {
        if(i==0)
        {
            b[i]=r;
        }
    }



    cout<<p<<" "<<q<<endl;
    cout<<c<<endl;
    cout<<a<<" "<<b;

}