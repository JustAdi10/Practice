#include<iostream>
using namespace std;

class dimension
{
    private:
        int m,n,a;
    
    public:
        int getdim ()
        {
            int m,n,a;
            cin>>m>>n>>a;
            return m,n,a;
        }
};

int main()
{
    dimension rect;

    try
    {
        int m,n,a;
        rect.getdim();

        if(m>0 && n>0 && a>0)
        {
            int rectar,tilear,count;

            rectar=n*m;
            tilear=a*a;

            count=rectar/tilear;

            cout<<count;
        }

        else 
        throw 0;
    }

    catch(int dimension)
    {
        cout<<"Invalid"<<endl;
    }

}