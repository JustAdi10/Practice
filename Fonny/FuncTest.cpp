#include<iostream>
using namespace std;

class Animal
{
    private:
        int legs,arms;

    public:
        string eats{};

        int nolegs(int legs,string name)
        {
            cout<<"The number of legs in "<<name<<" are: "<<legs<<endl;
            return legs;
        }

        int noarms(int arms,string name)
        {
            cout<<"The number of arms in "<<name<<" are: "<<arms<<endl;
            return arms;
        }

};

int main()
{
    int query;
    cout<<"Enter the number of queries: ";
    cin>>query;

    for(int i=0;i<query;i++)
    {
        string name;
        cout<<"Enter the name of the Animal: ";
        cin>>name;

        int nos_arms;
        int nos_legs;

        cout<<"Enter the number of arms: ";
        cin>>nos_arms;
        cout<<"Enter the number of legs: ";
        cin>>nos_legs;

        Animal random;
        random.noarms(nos_legs,name);
        random.nolegs(nos_legs,name);

    }
    
    return 0;
}