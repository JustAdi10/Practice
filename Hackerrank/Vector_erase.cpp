#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector <int> vect(n);

    for(int i=0;i<n;i++)
    {
        cin>>vect.at(i);
    }

    int q1;
    cin>>q1;

    vect.erase(vect.begin()+q1-1);

    int q2,q3;
    cin>>q2>>q3;

    vect.erase(vect.begin()+q2-1,vect.begin()+q3-1);

    cout<<vect.size()<<endl;

    for(int i=0;i<vect.size();i++)
    {
        cout<<vect.at(i)<<" ";
    }
}