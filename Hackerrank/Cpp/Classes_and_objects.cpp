#include<iostream>
#include<vector>
using namespace std;

class Student
{
    public:
        int calculateTotalScore(int n)
        {
            int arr[n][5];
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cin>>arr[i][j];
                }
            }

            int sum;
            vector <int> sumf;

            for(int i=0;i<n;i++)
            {
                sum =0;
                for(int j=0;j<5;j++)
                {
                    sum = sum +arr[i][j];
                }

                sumf.push_back(sum);
                
            }

            int count;
            for(int i=0;i<=n;i++)
            {
                if(sumf.at(0)<sumf.at(i))
                {
                    count++;
                }
            }
            cout<<count;


            return count;
        }
};

int main()
{
    Student kristen;

    int n;
    cin>>n;
    kristen.calculateTotalScore(n);

    return 0;
}