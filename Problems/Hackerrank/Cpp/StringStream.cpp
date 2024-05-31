#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector <int> parseInts(string str) 
{
	//write code here
    stringstream ss;
    string temp;
    
    str="";

     while (!ss.eof()) {
 
        // Extracting word by word from stream
        ss >> temp;
 
        // Concatenating in the string to be
        // returned
        str = str + temp;
    }
    return str;

}


int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}


// #include<iostream>
// #include<sstream>

// using namespace std;

// int main()
// {
//     string s;
//     cin>>s;

//     stringstream ss(string s);

//     char ch;
//     int a,b,c;
//     ss >> a >> ch >> b >> ch >> c;

//     cout<<a<<endl;
//     cout<<b<<endl;
//     cout<<c<<endl;
// }
