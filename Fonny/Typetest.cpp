#include<iostream>
using namespace std;

class random
{
    private:
        int a = 10;
    
    public:
        int random_1 ()
        {
            int sum1;
            cin>>sum1;

            int sum = a + sum1;

            return sum;
        }
};

class der_random : public random
{
    void random_2 (int sum)
    {
        cout<<"The sum is "<<sum<<endl;
    }
};

int main()
{
    random obj;
    obj.random_1;
    obj.random_2;

    return 0;
}