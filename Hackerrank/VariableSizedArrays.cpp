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

    int arr[][];

    for(int i=0;i<narr;i++)
    {
        int nelem1;
        cin>>nelem1;
        for(int j=0;j<=nelem1;j++)
        {
            int x;
            cin>>x;
            arr[i][j]=x;
        }
    }

    cout<<arr[0][1];

}