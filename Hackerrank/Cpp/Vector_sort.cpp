#include<iostream>
#include<vector>
#include<algorithm>

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

    sort(vect.begin(), vect.end());

    for(int i=0;i<n;i++)
    {
        cout<<vect.at(i)<<" ";
    }
}