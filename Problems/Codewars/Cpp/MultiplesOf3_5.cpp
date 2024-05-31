#include<iostream>
using namespace std;

int main() 
{
    int number;
    cin>>number;

    if(number>=0)
    {
        int count=0;
        int sum=0;
        for(int i=0;i<number;i++)
        {
            if(i%3==0 || i%5==0){
                sum=sum+i;
                count++;
            }
        }
        cout<<sum<<endl;
    }

    else
    {
        cout<<"0"<<endl;
    }

    return 0;
}