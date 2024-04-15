#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int elements;
    cout<<"Enter the number of elements: ";
    cin>>elements;
    cout<<endl;

    vector <int> vect(elements);
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<elements;i++)
    {
        cin>>vect.at(i);
    }

    int target;
    cout<<"Enter the target: ";
    cin>>target;
    cout<<endl;

    for(int i=0;i<elements;i++)
    {
        int solution = vect.at(i)+vect.at(i+1);

        if(solution==target)
        {
            cout<<"The index required to reach the target is: ";
            cout<<"["<<i<<","<<(i+1)<<"]"<<endl;
        }

        else
        {
            return NULL;
        }
    }

    return 0;
}

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
        
//     }
// }