#include<iostream>
#include<vector>
using namespace std;

int main()

{
    int query;
    cin>>query;

    int array1[query][4]; 

    for (int i = 0; i < query; i++) 
    { 
        for (int j = 0; j < 4; j++) 
        { 
            cin>>array1[i][j];
        } 
    } 

    for(int i=0;i<=query;i++)
    {
        for(int j=0;j<=4;)
        {
            int x=array1[query][j];
            vector <int> xcoords{};
            xcoords.push_back(x);
            j=j+2;
            
            if(j=4)
            {
                int xdisplay=xcoords.at(0)+xcoords.at(1);
                cout<<xdisplay<<endl;
            }
        }

        for(int j=1;j<4;)
        {
            int y=array1[query][j];
            vector <int> ycoords{};
            ycoords.push_back(y);
            j=j+2;
            
            if(j=3)
            {
                int ydisplay=ycoords.at(0)+ycoords.at(1);
                cout<<ydisplay<<endl;
            }
        }
    }
}