#include <iostream>
using namespace std;


int main()
{
    int n,m,a;

    try{
        cin>>n>>m>>a;

        if(n>0 & m>0 & a>0)
        {
            cout<<((n+a-1)/a)*((m+a-1)/a);
        }

        else
        throw 0;
    }

    catch(int dimension)
    {
    cout<<"Invalid Dimension must be positive "<<endl;
    }

    return 0;
} 