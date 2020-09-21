#include <iostream>

using namespace std;

int main()

{

    int num1 = 0, num2 = 5;

    //which statements will run

    if (1)

        cout << "1" << endl;

    if (-1)

        cout << "2" << endl;

    if (num1)

        cout << "3" << endl;

    if (num2)

        cout << "4" << endl;

    if (0)

        cout << "5" << endl;

    if ('0')

        cout << "6" << endl;

    if (10)

        cout << "7" << endl;

    if (-10)

        cout << "8" << endl;

    if ('a')

        cout << "9" << endl;

    if (!1)

        cout << "11" << endl;

    if (!-1)

        cout << "12" << endl;

    if (!num1)

        cout << "13" << endl;

    if (!num2)

        cout << "14" << endl;

    if (!0)

        cout << "15" << endl;

    if (!'0')

        cout << "16" << endl;

    if (!"0")

        cout << "17" << endl;

    if (!"a")

        cout << "18" << endl;

    if (!'a')

        cout << "19" << endl;

    return 0;
}