// #include<iostream>
// using namespace std;

// int addition(int a,int b)
// {
//     int sum = a + b;
//     cout<<sum;
//     return sum;
// }

// int main()
// {
//     int x,y;
//     cin>>x>>y;

//     addition(x,y);

//     return 0;
// }

#include<iostream>
using namespace std;

void average(float x, float y)
{
    float avg = (x+y)/2;
}

int main()
{
    float a,b,c;
    cin>>a>>b;

    c=average(a,b);

    cout<<c<<endl;
    return 0;    
}