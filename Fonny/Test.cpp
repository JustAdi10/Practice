#include<iostream>
using namespace std;

class Random
{
    private:
        int a,b;

    public:
        int fxn(int a, int b)
        {
            int sum = a + b;
            cout<<sum;
            
            return sum;
        }
};

int main()
{
    cout<<"Hello World!"<<endl;

    Random xyz;
    xyz.fxn(1,2);

    return 0;
}