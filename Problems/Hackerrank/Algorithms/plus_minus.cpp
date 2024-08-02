#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    float positive=0.0,negative=0.0,zero=0.0;
    for(int i=0;i<n;i++){
        cin>>arr[i];

        if(arr[i]>0){
            positive++;
        }

        else if(arr[i]==0){
            zero++;
        }

        else{
            negative++;
        }
    }

    cout<<float(positive/n)<<endl;
    cout<<float(negative/n)<<endl;
    cout<<float(zero/n)<<endl;


    return 0;
}