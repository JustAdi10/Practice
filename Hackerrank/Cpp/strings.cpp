#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

int main()
{
    vector <int> inpvect ();
    for(int i=0 ; i<3 ; i++)
    {
        cin>>inpvect.at(i);
    }

    int a = inpvect.at(0);
    int b = inpvect.at(1);
    int c = inpvect.at(2);


    stringstream ss;
    for(int i=0; i<3; i++)
    {
        ss<<inpvect.at(i)5;
    }
    // ss<<a<<b<<c;

    string sinput;
    ss>>sinput;

    cout<<sinput<<endl;

    return 0;
}