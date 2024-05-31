#include<iostream>
using namespace std;

class Base{
    int data1;

    public:
        int data2;
        void setdata();
        int getdata1();
        int getdata2();
};

void Base :: setdata (void){
    data1=10;
    data2=20;
}

void Base :: getdata(void){
    return data1;
}

void Base :: getdata2(void){
    return data2;
}

class Derived : public Base {
    int data3;

    public:
        void process();
        void display();
};

void 

int main()
{
    
    return 0;
}