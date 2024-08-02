#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        
        if(arr[i]>40){
            int rem=arr[i]%5;
            if(rem==(3|4)){
                arr[i]=arr[i]+rem;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}