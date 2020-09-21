
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int random, guess, record[10], i = 0;
    srand(time(NULL));

    random = rand() % 10 + 1;

    do
    {
        cout << "\nGuess the number (1 to 10): ";
        cin >> guess;
        record[i] = guess;
        i++;
        if (random < guess)
            cout << "\nThe secret number is lower";
        else if (random > guess)
            cout << "\nThe secret number is higher";
    } while (random != guess);

    cout << "\nCongratulations!";
    for (i = 0; i <= 3; i++)
    {

        cout << "\n"
             << record[i];
    }

    return 0;
}