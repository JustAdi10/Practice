#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x=max(a,b);
    int y=max(c,d);
    int maxi=max(x,y);
    cout<<maxi<<endl;
    return 0;
}





