#include<iostream>
#include<vector>
using namespace std;

int main()
{
    /*
    vector <int> test_scores {455,4,6,76,746};
    vector <int> random (10,34);
    cout<<test_scores.size()<<endl;
    cout<<test_scores.push_back(56);
    */


   vector <int> vec {10,20,30,40,50};
   vec.at(0)=100;
   vec.at(4)=1000;

   for(int i=0;i<=4;i++)
   {
        cout<<vec.at(i)<<endl;
   }

//Blank commit
}