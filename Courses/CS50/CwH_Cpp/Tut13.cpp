#include<iostream>
using namespace std;

int main()
{
    int marks[] = {1,2,3,4};

    cout<<marks[0]<<endl;                        
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // int mathmarks[4];
    // mathmarks[0] = 10;
    // mathmarks[1] = 11;
    // mathmarks[2] = 12;
    // mathmarks[3] = 13;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"Mathsmarks at "<<i<<" are "<<mathmarks[i]<<endl;
    // }

    // int i = 0;
    // do
    // {
    //     cout<<"Mathsmarks at "<<i<<" are "<<mathmarks[i]<<endl;
    //     i++;
    // } while (i<4);
    
    int *p = marks;
    for (int i = 0; i < 4; i++)
    {
        p = p+i;
        cout<<"The value of marks["<<i<<"]"<<" is "<<*p<<endl;
    }
    

    return 0;
}