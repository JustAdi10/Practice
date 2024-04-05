#include<iostream>
using namespace std;

int stlineop(int a, int b)
{
    for(int i=0;i<b;i++)
    {
        cout<<a;
    }
    return a;
}

int main()
{
    int symb,dim;

    cout<<"Enter the number for the pattern: ";
    cin>>symb;

    cout<<"Enter the side of the square: ";
    cin>>dim;

    cout<<endl;

    //int stlineop(int symb, int dim);

    for(int i=0;i<dim;i++)
    {
        cout<<symb<<" ";
    }
    
    cout<<endl;

    for(int i=0;i<dim-2;i++)
    {
        cout<<symb;

        for(int j=0;j<dim-2;j++)
        {
            cout<<"   ";
        }

        cout<<symb<<endl;
    }

    //int stlineop(int symb, int dim);
    for(int i=0;i<dim;i++)
    {
        cout<<symb<<" ";
    }

}