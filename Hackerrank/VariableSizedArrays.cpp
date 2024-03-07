/*
get the number of arrays and the number of queries

get the number of elements of the first array and the elements of the first array
get the number of elements of the second array and the elements of the second array

get the first query
get the second query

*/

#include<iostream>
using namespace std;

int main()
{
    int narr,nque;
    cin>>narr>>nque;

    int a[narr][];  

    for(int i=0;i<=narr;i++)
    {
        int nelem1;
        cin>>nelem1;
        for(int j=0;j<=nelem1;j++)
        {
            int x;
            cin>>x;
            a[i][j]=x;
        }
    }

    int p,q,r,s,u,v;
    cin>>p>>q;
    cin>>r>>s;

    u=a[p][q];
    v=a[r][s];

    cout<<u<<endl<<v;

}