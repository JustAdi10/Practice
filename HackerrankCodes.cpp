/*
#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<""<<endl;
    cin>>a;

    cout<<""<<endl;
    cin>>b;

    
    if(a>0,b>0,a<10,b<10)
    {
        if(a,b==1)
        {
            cout<<"one"<<endl;
        }

    
        else if(n==2)
        {
        cout<<"two"<<endl;
       
        }
    
        else if(n==3){
        cout<<"three"<<endl;
        
        } 
    
        else if(n==4){
        cout<<"four"<<endl;
        
        }
    
        else if(n==5){
        cout<<"five"<<endl;
        
        }
    
        else if(n==6)
        {
         cout<<"six"<<endl;
        
        }
    
        else if(n==7)
        {
         cout<<"seven"<<endl;
        
        }
    
        else if(n==8)
        {
         cout<<"eight"<<endl;
        
        }
    
        else if(n==9){
        cout<<"nine"<<endl;
     }
    }

    int s=n%2;

    if(s==0)
    {
        cout<<"even"<<endl;
    }
    else
    {
        cout<<"Odd"<<endl;
    }

}

*/


#include<iostream>
using namespace std;


void loop(string arr[],int n)
{
    for(int i=0;i<10;i++)
    {
        if(i==n)
        {
            cout<<arr[i]<<" "<<endl;

        }
    
    }

}

int main()
{
    int a,b;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    cout<<""<<endl;
    cin>>a;

    cout<<""<<endl;
    cin>>b;

    loop(arr,a);
    loop(arr,b);

    

}




/*
#include <iostream>
#include <cstdio>
using namespace std;

int main()

/*int max_of_four(int a, int b, int c, int d)
{

}

int main()
{
    int a,b,c,d;
    cout<<""<<""<<""<<"";
    cin>>a>>b>>c>>d;


    
    
    return 0;
}
*/