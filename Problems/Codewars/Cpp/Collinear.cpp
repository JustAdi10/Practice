#include<iostream>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    if((x1==0 && y1==0) || (x2==0 && y2==0) )
    {
        cout<<"true"<<endl;
        return true;
    }
    
    else
    {
        float constant = x2/x1;

        if(constant == (y2/y1))
        {
            cout<<"true"<<endl;
            return true;
        }
        
        else
        {
            cout<<"False"<<endl;
            return false;
        }
    }
}