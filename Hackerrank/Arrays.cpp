#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"";
        scanf("%d",&arr[i]);
    }

    for(int i=n;i>=0;i--)
    {
        if(i-1>=0)
        {
            printf("%d ",arr[i-1]);
        }
    }

}