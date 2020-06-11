#include <iostream>
using namespace std;
int main()
{

    int kph;
    float mph;
    cout << "\nSpeed Conversion Chart";
    cout << "\nMPH\tKPH";
    cout << "\n------------------";
    for (kph = 60; kph <= 130; kph += 5)
    {
        mph = kph * 0.6214;
        cout << "\n"
             << mph << "\t" << kph;
    }
}