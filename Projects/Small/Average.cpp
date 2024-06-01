#include<iostream>
using namespace std;

int main()
{
    int marks[5];
    int sum=0;
    cout<<"Enter 5 subject marks "<<endl;

    for(int i=0;i<5;i++)
    {
        cin>>marks[i];

        sum = sum + marks[i];
    }

    float average = sum/5;

    cout<<"The Average is "<<average<<endl;    
    return 0;
}