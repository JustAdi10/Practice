#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int nums;
    cin>>nums;

    vector <int> twosum(nums);

    for(int i=0;i<nums;i++)
    {
        cin>>twosum.at(i);
    }

    int target;
    cin>>target;

    for(int i=0;i<nums;i++)
    {
        for(int j=0;j<nums;j++)
        {
            int solution = twosum.at(i)+twosum.at(j);

            if(solution==target)
            {
                cout<<"["<<i<<","<<j<<"]"<<endl;
            }
        }
    }

    return 0;
}