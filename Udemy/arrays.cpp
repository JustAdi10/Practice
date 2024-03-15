#include<iostream>
using namespace std;

int main()
{
    int arr[9];

    for(int i;i<=9;i++)
    {
        arr[i]=0;
    }
    
    arr[0]=100;
    arr[9]=1000;

    cout<<arr[10];
}