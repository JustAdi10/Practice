#include<iostream>
using namespace std;

// struct employee
// {
//     int eID;
//     char facChar;
//     float salary;
// };

typedef struct employee
{
    int eID;
    char facChar;
    float salary;
}ep;

int main()
{
    ep Aditya;
    Aditya.eID = 1;
    Aditya.facChar = 'c';
    Aditya.salary = 25000;

    
    return 0;
}