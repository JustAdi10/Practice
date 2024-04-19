#include<iostream>
#include<vector>
using namespace std;

class Student
{
    public:

        int input(int n)
        {
            int arr[n][5];
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cin>>arr[i][j];
                }
            }

            return arr[n][5];
        }

        int calculateTotalScore(int n,int arr[n][5])
        {
            int n;
            int arr[n][5];
            int sum =0;
            vector <int> sumf;
            
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<5;j++)
                {
                    sum = sum +arr[i][j];
                }

                sumf.at(i)=sum;
                sum =0;
            }

            return sumf;
        }
}

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input(n);
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}