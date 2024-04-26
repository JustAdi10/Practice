//loops
#include<iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 100; i++)
    {
        cout<<i<<endl;
    }
    
    //infinite loop
    for (int i = 0; 3 < 4; i++)
    {
        cout<<i<<endl;
    }


    int i=0;
    while (i<=40)
    {
        cout<<i<<endl;
        i++;
    }
    
    //infinite while
    while(true)
    {
        cout<<i<<endl;
        i++;
    }


    do
    {
       cout<<i<<endl;
    } while (i<40);
    
    
}