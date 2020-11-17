#include <iostream>
using namespace std;

float Farenheit(float Cel);
float Celcius(float Far);
int main()
{
    cout << "Celcius\t\tFarenheit" << endl;
    for (int i = 0; i <= 100; i++)
    {
        cout << i << "\t\t" << Farenheit(i) << endl;
    }
    cout << "\nFarenheit\tCelcius" << endl;

    for (int i = 32; i <= 212; i++)
    {
        cout << i << "\t\t" << Celcius(i) << endl;
    }
}
float Farenheit(float Cel)
{
    return (1.8 * Cel) + 32;
}
float Celcius(float Far)
{
    return (Far - 32) / (1.8);
}