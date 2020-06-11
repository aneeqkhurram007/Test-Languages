#include <iostream>
using namespace std;
int main()
{

    int teams[10], i, j, temp = 1, score;
    for (i = 0; i <= 4; i++)
    {
        cout << "Enter a score for team " << i + 1 << " :";
        cin >> teams[i];
    }
    score = teams[0];
    for (i = 0; i <= 4; i++)
    {

        if (score < teams[i])
        {
            score = teams[i];
            temp = i + 1;
        }
    }

    cout << "Winning team is " << temp << " with score of " << score;
}