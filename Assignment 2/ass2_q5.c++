#include <iostream>
using namespace std;
int main()
{
    int price_in_dollar, dollar_rate, customs_duty, regulatory_duty,
        sales_tax, additional_sales_tax, itDuty, mobileLevy, toatlTax, beforePrice,
        afterPrice;
    cout << "\nPlease input your phone's price in Dollars $ = ";
    cin >> price_in_dollar;
    cout << "\nToday's Dollar $ rate = ";
    cin >> dollar_rate;
    beforePrice = price_in_dollar * dollar_rate;
    customs_duty = 250;
    if (price_in_dollar >= 1 && price_in_dollar <= 60)
    {
        regulatory_duty = 250;
    }
    if (price_in_dollar >= 61 && price_in_dollar <= 130)
    {
        regulatory_duty = 0.1 * beforePrice;
    }
    if (price_in_dollar > 130)
    {
        regulatory_duty = 0.2 * beforePrice;
    }
    sales_tax = 1500;
    additional_sales_tax = 0.03 * beforePrice;
    itDuty = 0.09 * beforePrice;
    if (beforePrice >= 10000 && beforePrice <= 40000)
    {
        mobileLevy = 1000;
    }
    if (beforePrice > 40000 && beforePrice <= 80000)
    {
        mobileLevy = 3000;
    }
    if (beforePrice > 80000)
    {
        mobileLevy = 5000;
    }
    afterPrice = beforePrice + mobileLevy + itDuty + additional_sales_tax + sales_tax + regulatory_duty + customs_duty;
    toatlTax = mobileLevy + itDuty + additional_sales_tax + sales_tax + regulatory_duty + customs_duty;
    cout << "\nTotal Taxes = " << toatlTax << " Rs.";
    cout << "\nPrice of phone before taxes = " << beforePrice << " Rs.";

    cout << "\nPrice of phone after taxes = " << afterPrice << " Rs.";
}