#include <iostream>
using namespace std;
int main()
{

    int acc_num;
    float premi_channels, basic_connec, res_customers,
        busi_customers, billng, service_fee;
    cout << "Enter your account number: ";
    cin >> acc_num;
    cout << "Enter the premium channels: ";
    cin >> premi_channels;
    if (acc_num % 2 == 0)
    {
        basic_connec = 4.50;
        premi_channels = 7.50 * premi_channels;
        service_fee = 20.50;
        billng = basic_connec + premi_channels + service_fee;
        cout << "Customer's account number: " << acc_num;
        cout << " and Billing amount: " << billng << " $";
    }
    else
    {
        cout << "Additional connections: ";
        cin >> service_fee;
        basic_connec = 4.50;
        premi_channels = 50 * premi_channels;
        service_fee = 75.00 + service_fee * 5.00;
        billng = basic_connec + premi_channels + service_fee;

        cout << "Customer's account number: " << acc_num;
        cout << " and Billing amount: " << billng << " $";
    }
}