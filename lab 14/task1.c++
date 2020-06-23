#include <iostream>
using namespace std;
int main()
{

    char fir_name[20], last_name[20];
    int i;
    cout << "Enter your first name: ";
    cin >> fir_name;
    cout << "Enter your second name: ";
    cin >> last_name;

    if (fir_name[0] == last_name[0])
    {
        cout << "\nThey are Equal";
    }
    else
    {
        cout << "\nThey are not Equal";
    }
}