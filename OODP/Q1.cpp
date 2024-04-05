// #include<iostream>
// using namespace std;

// class doctor
// {
// public:
//     string docname;
//     string docdeg;

//     void get_docname()
//     {
//         cin >> docname;
//     }

//     void getedu()
//     {
//         cin >> docdeg;
//     }

//     void dispdname()
//     {
//         cout << "Doctor Name: " << docname << endl;
//     }

//     void dispedu()
//     {
//         cout << "Doctorate Degree: " << docdeg << endl;
//     }

// };

// class patient
// {
// public:
//     string pname;
//     int bno;

//     void getdata()
//     {
//         cin >> pname;
//     }

//     void get_bno()
//     {
//         cin >> bno;
//     }

//     void dispdata()
//     {
//         cout << "Patient Name: " << pname << endl;
//     }

//     void dispbno()
//     {
//         cout << "Bed Number: " << bno << endl;
//     }
// };


// int main()
// {
//     doctor d;
//     patient p;

//     d.get_docname();
//     d.getedu();
//     p.getdata();
//     p.get_bno();

//     d.dispdname();
//     d.dispedu();
//     p.dispdata();
//     p.dispbno();

//     return 0;
// }


#include <iostream>
using namespace std;
class consumer
{
    public:
    virtual void getdata()=0;
    virtual void display()=0;
};
class transaction:public consumer
{
    public:
    char name[50];
    int cd,qty,pri,Tpri;
    long int Tn;
    void getdata(){
    cin>>name;
    cin>>cd>>Tn>>qty>>pri;
    Tpri=qty*pri;
    }
    void display(){
    cout<<"Name : "<<name<<endl;
    cout<<"Code : "<<cd<<endl;
    cout<<"Telephone : "<<Tn<<endl;
    cout<<"Quantity : "<<qty<<endl;
    cout<<"Price : "<<pri<<endl;
    cout<<"Total Price : "<<Tpri<<endl;
    }
};
int main(){
consumer *o1;
transaction o2;
o1=&o2;
o1->getdata();
o1->display();
return 0;
}