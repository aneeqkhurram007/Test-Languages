#include <iostream>
using namespace std;
class Time
{
private:
    int hours;
    int minutes;
    int seconds;
    char *convention = new char(2);

public:
    void setHours(int hours)
    {
        if (hours >= 0 && hours < 12)
        {
            this->hours = hours;
        }
        else
        {
            cout << "This is not a valid input. Try Again: " << endl;
            cin >> hours;
            this->setHours(hours);
        }
    }
    int getHours()
    {
        return this->hours;
    }
    void setMinutes(int minutes)
    {
        if (minutes >= 0 && minutes < 60)
        {
            this->minutes = minutes;
        }
        else
        {
            cout << "This is not a valid input. Try Again: " << endl;
            cin >> minutes;
            this->setMinutes(minutes);
        }
    }
    int getMinutes()
    {
        return this->minutes;
    }
    void setSeconds(int seconds)
    {
        if (seconds >= 0 && seconds < 60)
        {
            this->seconds = seconds;
        }
        else
        {
            cout << "This is not a valid input. Try Again: " << endl;
            cin >> seconds;
            this->setSeconds(seconds);
        }
    }
    int getSeconds()
    {
        return this->seconds;
    }
    void setConvention(char *convention)
    {
        this->convention = convention;
        if (this->convention[0] == 'P' || this->convention[0] == 'p')
        {
            this->hours = this->getHours() + 12;
        }
    }
    char *getConvention()
    {
        return this->convention;
    }
    void display()
    {

        cout << "Time value returned as " << this->getHours()
             << " : " << this->getMinutes()
             << " : " << this->getSeconds() << endl;
    }
};
int main()
{
    Time time = Time();
    Time time2 = Time();
    int hours, seconds, minutes;
    char *convention = new char(2);
    cout << "Please Enter Your Entery Time(HH:MM:SS AM/PM)" << endl;

    cout << "Hours: ";
    cin >> hours;
    time.setHours(hours);

    cout << "Minutes: ";
    cin >> minutes;
    time.setMinutes(minutes);

    cout << "Seconds: ";
    cin >> seconds;
    time.setSeconds(seconds);

    cout << "Convention: ";
    cin >> convention;
    time.setConvention(convention);
    time.display();

    cout << "Please Enter CurrentTime(HH:MM:SS AM/PM)" << endl;

    cout << "Hours: ";
    cin >> hours;
    time2.setHours(hours);

    cout << "Minutes: ";
    cin >> minutes;
    time2.setMinutes(minutes);

    cout << "Seconds: ";
    cin >> seconds;
    time2.setSeconds(seconds);

    cout << "Convention: ";
    cin >> convention;
    time2.setConvention(convention);
    time2.display();

    cout << "\nDuration between Both Times is: " << time2.getHours() - time.getHours() << " hours and "
         << time2.getMinutes() - time.getMinutes() << " minutes and "
         << time2.getSeconds() - time.getSeconds() << " seconds." << endl;

    return 0;
}