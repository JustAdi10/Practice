/*#include<iostream>
using namespace std;

int main()
{
    int a,b;
    string arr[9]={"one","two","three","four","five","six","seven","eight","nine"};
    

    cout<<""<<"";
    cin>>a>>b;


    if(a<10,a>0)
    {
        for(int i=a;i<=b;i++)
        {
            cout<<arr[i-1]<<endl;

        }
    }

    int p,q;

    p=a%2;
    q=b%2;

    if(p==0)
    {
        cout<<"even"<<endl;
    }
    else
    {
        cout<<"odd"<<endl;
    }

    if(q==0)
    {
        cout<<"even"<<endl;
    }
    else
    {
        cout<<"odd"<<endl;
    }
    
}*/


#include<iostream>
using namespace std;

int main()
{
    int a,b;
    string arr[9]={"one","two","three","four","five","six","seven","eight","nine"};
    

    cout<<""<<"";
    cin>>a>>b;

    if(a>0)
    {
        for(int i=a;i<=b;i++)
    {
        cout<<i<<endl;
        if(i<10)
        {
            cout<<arr[i-1]<<endl;
        }


        else
        {
            for(int j=i;j<b;j++)
            {
                int p;
                p=j%2;

                if(p==0)
                {
                    cout<<"even"<<endl;
                }
                else
                {
                    cout<<"odd"<<endl;
                }
                
            }
        }
    }
    }
}
