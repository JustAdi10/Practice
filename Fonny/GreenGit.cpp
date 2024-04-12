#include<iostream>
using namespace std;

class idek
{
    private:
        int a,b;

    public:
        int sax(int a, int b)
        {
            int random;
            random = (a + b - a*b);
            cout<<random;

            return random;
        }
};

int main()
{
    cout<<"Hello World! "<<endl;
    return 0;
}