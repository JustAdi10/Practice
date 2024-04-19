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






// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <cassert>
// using namespace std;

// // Write your Student class here

// int main() {
//     int n; // number of students
//     cin >> n;
//     Student *s = new Student[n]; // an array of n students
    
//     for(int i = 0; i < n; i++){
//         s[i].input();
//     }

//     // calculate kristen's score
//     int kristen_score = s[0].calculateTotalScore();

//     // determine how many students scored higher than kristen
//     int count = 0; 
//     for(int i = 1; i < n; i++){
//         int total = s[i].calculateTotalScore();
//         if(total > kristen_score){
//             count++;
//         }
//     }

//     // print result
//     cout << count;
    
//     return 0;
// }