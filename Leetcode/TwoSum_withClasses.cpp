#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
    public:

    vector<int> twoSum(vector<int>& nums, int target)
    {
        int vectlen;
        cin>>vectlen;

        vector <int> nums(vectlen);

        for(int i=0;i<vectlen;i++)
        {
            cin>>nums.at(i);
        }

        int target;
        cin>>target;

        for(int i=0;i<vectlen;i++)
        {
            int solution = nums.at(i)+nums.at(i+1);

            if(solution==target)
            {
                cout<<"["<<i<<","<<(i+1)<<"]"<<endl;
            }
        }
    }
};


int main()
{
    Solution answer;

    int vectlen;
    cin>>vectlen;



    

}

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
        
//     }
// }