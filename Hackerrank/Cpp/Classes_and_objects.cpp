#include<iostream>
using namespace std;

class student
{
    public:
    int scores[5];

    void inp()
    {
        for(i=0;i<=5;i++)
        {
           cin>>scores[i];
        }
    }

    int calculateTotalScore()
    {
        int totsco;
        for(i=0;i<=4;i++)
        {
            totsco=scores[i]+scores[i+1];
        }
    }

};


int main()
{

}