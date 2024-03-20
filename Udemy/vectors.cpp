#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> test_scores {455,4,6,76,746};
    vector <int> random (10,34);


    cout<<test_scores.size()<<endl;
    cout<<test_scores.push_back(56);
}