#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int no_sem;
    cout<<"Enter the number of semesters: "<<endl;
    cin>>no_sem;

    float inp_semesters[no_sem];
    float sum_perc = 0;

    cout<<"Enter semester wise percentages "<<endl;
    for(int i=0;i<no_sem;i++){
        cin>>inp_semesters[i];
        sum_perc = sum_perc + inp_semesters[i];
    }

    float cgpa = ((sum_perc/no_sem)/9.5);

    cout<<"Your CGPA is : "<<cgpa<<endl;
    
    return 0;
}