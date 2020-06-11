
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int random, guess;
    srand(time(NULL));

    random = rand() % 10 + 1;

    do
    {
        cout << "\nGuess the number (1 to 10): ";
        cin >> guess;
        if (random < guess)
            cout << "\nThe secret number is lower";
        else if (random > guess)
            cout << "\nThe secret number is higher";
    } while (random != guess);

    cout << "\nCongratulations!";
    return 0;
}