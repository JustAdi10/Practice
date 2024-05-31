#include<iostream>
using namespace std;

int main()
{
    int symb,dim;

    cout<<"Enter the number for the pattern: ";
    cin>>symb;

    cout<<"Enter the side of the square: ";
    cin>>dim;

    cout<<endl;

    for(int i=0;i<dim;i++)
    {
        for(int j=0;j<dim;j++)
        {
            cout<<symb<<" ";
        }
        cout<<endl;
    }
    return 0;
}