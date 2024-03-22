#include<iostream>
#include<vector>

using namespace std;

int main()
{
    //vector declaration
    vector <int> vector1{};
    vector <int> vector2{};
    
    //adding values to 1
    vector1.push_back(10);
    vector1.push_back(20);

    for(int i=0;i<vector2.size();i++)
    {
        cout<<vector2.at(i)<<" ";
    }
    cout<<endl;

    //adding values to 2
    vector2.push_back(100);
    vector2.push_back(200);

    for(int i=0;i<vector2.size();i++)
    {
        cout<<vector2.at(i)<<" ";
    }
    cout<<endl;

    //2d vect
    vector <vector <int>> vector_2d{};

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    //printing 2d vect
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<vector_2d.at(i).at(j)<<endl;
        }
    }

    //changing element
    vector1.at(0)=1000;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<vector_2d.at(i).at(j)<<endl;
        }
    }

    for(int i=0;i<vector2.size();i++)
    {
        cout<<vector2.at(i)<<" ";
    }
    cout<<endl;

}