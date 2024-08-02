#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long arr[5];

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    sort(arr,arr+5);
    long min=0;
    for(int i=0;i<4;i++){
        min=min+arr[i];
    }
    long max=0;
    for(int i=1;i<5;i++){
        max=max+arr[i];
    }

    cout<<min<<" "<<max<<endl;

    return 0;
}