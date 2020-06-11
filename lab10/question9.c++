#include <iostream>
using namespace std;
int main()
{

    int prime, i, a, count = 0, flag = 0, number;
    cout << "Enter numbers: ";
    for (i = 1; i <= 10; i++)
    {

        cin >> number;
        cout << " ";
        flag = 0;
        for (a = 2; a <= number / 2; a++)
        {

            if (number % a == 0)
            {

                flag = 1;
            }
        }
        if (flag == 0 && number != 1 && number != 0)
        {
            for (size_t i = 0; i < count; i++)
            {
                /* code */
            }

            count++;
        }
    }
    cout << "There are " << count << " prime numbers";
}