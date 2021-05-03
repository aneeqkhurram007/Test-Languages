#include <iostream>
using namespace std;

class ThreeWayLamp
{

public:
    void Switch(int active)
    {
        if (active <= 0)
        {
            cout << "Number must be positive" << endl;
            system(0);
        }
        else
        {
            int nActive = active;
            if (active > 4)
            {
                nActive = active % 4;
            }

            switch (nActive)
            {
            case 0:
                cout << "High Light with indication: " << active;
                break;
            case 1:
                cout << "Off Light with indication: " << active;
                break;
            case 2:
                cout << "Low Light with indication: " << active;
                break;
            case 3:
                cout << "Medium Light with indication: " << active;
                break;

            default:
                break;
            }
        }
    }
};

int main()
{
    ThreeWayLamp bulb;
    int num;
    cout << "Enter number of indications: ";
    cin >> num;
    bulb.Switch(num);
    return 0;
}