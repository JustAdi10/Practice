#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int n;
    cin>>n;

    vector <int> nos;
    for(int i=0; i<n; i++)
    {
        cin>>nos.at(i);
    }

    int no_query;
    cin>>no_query;
    
    vector <int> query;
    for(int i=0; i<no_query; i++)
    {
        cin>>query.at(i);

        int position = find(nos.begin(), nos.end(), query.at(i))
    }


    return 0;
}
