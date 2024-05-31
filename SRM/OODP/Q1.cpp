#include<iostream>
using namespace std;

class doctor
{
public:
    string docname;
    string docdeg;

    void get_docname()
    {
        cin >> docname;
    }

    void getedu()
    {
        cin >> docdeg;
    }

    void dispdname()
    {
        cout << "Doctor Name: " << docname << endl;
    }

    void dispedu()
    {
        cout << "Doctorate Degree: " << docdeg << endl;
    }

};

class patient
{
public:
    string pname;
    int bno;

    void getdata()
    {
        cin >> pname;
    }

    void get_bno()
    {
        cin >> bno;
    }

    void dispdata()
    {
        cout << "Patient Name: " << pname << endl;
    }

    void dispbno()
    {
        cout << "Bed Number: " << bno << endl;
    }
};


int main()
{
    doctor d;
    patient p;

    d.get_docname();
    d.getedu();
    p.getdata();
    p.get_bno();

    d.dispdname();
    d.dispedu();
    p.dispdata();
    p.dispbno();

    return 0;
}