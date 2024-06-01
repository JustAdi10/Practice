#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int count=0;

    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<5;i++)
    {
        cout<<"  i is " <<i<<endl;

        for(int j=i+1;j<5;j++)
        {
            cout<<"j is "<<j<<endl;
            if(i !=j )
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    cout<<" Count is "<<count<<endl;
                }
            }
        }
    }

    cout<<count<<endl;


    return 0;
}