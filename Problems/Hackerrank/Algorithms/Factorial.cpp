#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    BigInt factorial=1;
    while(n>0){
        factorial=factorial*n;
        n--;
    }

    cout<<factorial<<endl;

    return 0;
}