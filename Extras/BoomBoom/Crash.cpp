#include<iostream>
using namespace std;

class time
{
    private:
        int seconds,minutes,hours;
    

    public:
    
        int seconds_fxn()
        {
            while(1)
            {
                seconds++;
            }

            return seconds;
        }

        int minutes_fxn()
        {
            while(1)
            {
                if(seconds%60==0)
                {
                    minutes++;
                }
            }

            return minutes;
        }
        
        int hours_fxn()
        {
            while(1)
            {
                if(hours%60==0)
                {
                    hours++;
                }
            }
        }

        void display(int time::seconds ,int time::minutes,int time::hours)
        {
            while(1)
            {
                cout<<seconds<<" seconds "<<minutes<<" minutes "<<hours<<" hours"<<endl;
            }
        }
};

int main()
{
    time clock;
    clock.display;
    
    return 0;
}