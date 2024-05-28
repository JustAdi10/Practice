#include<iostream>
#include<vector>
using namespace std;

class Student{

    public:
        void input(){

            vector <int> scores;

            for(int i=0;i<5;i++)
            {
                cin>>scores.at(i);
            }


        }

        int  calculateTotalScore (){

            int sum;
            vector <int> scores;

            for (int i=0; i<5; i++)
            {
                
                if(i==0)
                {
                    sum = scores.at(i);
                }

                else{
                    sum = sum + scores.at(i);
                }
            }

            return sum;
        }
};

int main()
{
    int n;
    cin>>n;
    
     
    return 0;
}