#include<iostream>
using namespace std;

class employee
{
    int id;

    public:
    float salary;
        employee(int inpId)
        {
            id = inpId;
            salary = 34.0;
        }
};

class programmer : public employee
{
    public:
    int languageCode = 9;

};

int main()
{
    employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;

    programmer skillf(1);
    return 0;
}