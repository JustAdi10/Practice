#include<iostream>
using namespace std;

void loop(string arr[],int h)
{
    for(int i=0;i<10;i++)
    {
        if(i==h)
        {
            cout<<arr[i]<<" ";

        }
    
    }

}

int main()
{
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;

    cout<<"Enter number: ";
    cin>>n;

    int h,t,o;
    h=n/100;
    t=(n%100)/10;
    o=n%10;

    loop(arr,h);
    loop(arr,t);
    loop(arr,o);
}