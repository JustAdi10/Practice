#include<iostream>
#include<vector>
using namespace std;

int main()

{
    int query;
    cin>>query;

    int array1[query][4]; 

    for (int i = 0; i < query; i++) 
    { 
        for (int j = 0; j < 4; j++) 
        { 
            cin>>array1[i][j];
        } 
    } 

    for(int i=0;i<=query;i++)
    {
        for(int j=0;j<4)
        {
            int x=array1[query][j]
            j=j+2;
        }
    }
}