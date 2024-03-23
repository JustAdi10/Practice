#include<iostream>
#include<vector>

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

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(vect.at(j)>vect.at(j+1))
            {
                swap(vect.at(j),vect.at(j+1));
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<vect.at(i)<<" ";
    }
}