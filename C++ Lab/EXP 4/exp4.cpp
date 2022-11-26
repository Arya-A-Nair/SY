#include <iostream>
using namespace std;
class Time
{   
    int hrs, mins;   
    public:
        Time()
        {
            hrs = mins = 0;
        }
        Time(int i, int j)
        {
            hrs= i;
            mins= j;
        }
    Time operator + (const Time &t2)
    {
        Time temp;
        temp.hrs = hrs + t2.hrs;
        temp.mins = mins + t2.mins;
        return temp;
    }
    Time operator ++ () 
    {
        Time temp;
        temp.mins = ++mins;

        return temp;
    }
        friend Time operator -- (Time & op1, int not_used);
        friend Time operator - (Time t1, Time t2);
        
        void Display();
};

Time operator -- (Time & op1, int not_used)
{
    Time temp = op1;
    op1.mins--;
    return temp;
}

Time operator - (Time t1, Time t2)
{
    Time temp;
    temp.hrs = t1.hrs - t2.hrs;
    temp.mins = t1.mins - t2.mins;
    return temp;
}

void Time::Display()
{
    int addhr;
    if(mins>=60)
    {
        addhr = mins/60;
        hrs = addhr + hrs;
        mins = mins - addhr*60;
    }
    cout << hrs<< ":";
    cout << mins<< ":"<<endl;
}
int main()
{
    Time t1(12, 22);
    t1.Display();
    ++t1; 
    t1.Display();
    t1--;
    t1.Display();
    Time t2(23,45);
    Time t3 = t1 + t2;
    t3.Display();
    Time t4 = t3 - t2;
    t4.Display();
    return 0;
}