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

    rect.getdim(int m, int n, int a);

}