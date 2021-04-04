#include <iostream>
using namespace std;
class time
{                //class is by default private
    float hours; //data members
    float minutes;
    float seconds;

public:
    time(float h = 0.0, float m = 0.0, float s = 0.0)
    { //parameterized;
        sethours(h);
        setminutes(m);
        setseconds(s);
    }
    //Setters and Getters
    void sethours(float h)
    {
        if (h > 0.0 && h < 24)
        { //check that whether the user is entering the right value
            hours = h;
        }
        else
        {
            cout << " wrong input" << endl;
        }
    }

    void setminutes(float m)
    {
        if (m > 0.0 && m < 60)
        {
            minutes = m;
        }
        else
        {
            cout << "wrong input" << endl;
        }
    }
    void setseconds(float s)
    {
        if (s > 0.0 && s < 60)
        {
            seconds = s;
        }
        else
        {
            cout << "wrong input" << endl;
        }
    }

    float gethours()
    {
        return hours;
    }

    float getminutes()
    {
        return minutes;
    }
    float getseconds()
    {
        return seconds;
    }

    void display()
    {
        cout << "hours=" << hours << endl
             << "minutes=" << minutes << endl
             << "seconds=" << seconds << endl;
    }
    void formatone()
    {
        int hr;
        if (hours <= 12)
        {
            hr = hours;
        }
        else
        {
            hr = hours - 12;
        }
        cout << "Time in 12 hours format :" << hr << ":" << minutes << ":" << seconds << endl;
    }
    void formattwo()
    {
        cout << "time in 24 hours format:" << hours << ":" << minutes << ":" << seconds << endl;
    }
    void duration()
    {
        cout << " duration is :" << this->hours << this->minutes << this->seconds;
    }
};

int main()
{
    float hours, minutes, seconds;
    float hour, minute, second;
    cout << "enter the entry time:";
    cin >> hours >> minutes >> seconds;
    cout << "enter the current time:";
    cin >> hour >> minute >> second;
    time t1(hours, minutes, seconds);
    t1.display();
    cout << endl;
    t1.formatone();
    cout << endl;
    t1.formattwo();
    cout << endl;
    time t2(hour, minute, second);
    t2.display();
    cout << endl;
    t2.formatone();
    cout << endl;
    t2.formattwo();
    cout << endl;
}