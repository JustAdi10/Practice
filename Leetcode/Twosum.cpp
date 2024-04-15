#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int elements;
    cin>>elements;

    vector <int> vect(elements);

    for(int i=0;i<elements;i++)
    {
        cin>>vect.at(i);
    }

    int target;
    cin>>target;

    for(int i=0;i<elements;i++)
    {
        int solution = vect.at(i)+vect.at(i+1);

        if(solution==target)
        {
            cout<<"["<<i<<","<<(i+1)<<"]"<<endl;
        }
    }

    return 0;
}

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
        
//     }
// }