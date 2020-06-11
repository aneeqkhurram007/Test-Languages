#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of quizes: ";
    cin >> n;
    int quiz_before[n], quiz_after[n], before_sum = 0,
                                       after_sum = 0, i, temp, j;
    //Before QUIZ

    cout << "\nBefore quiz\n";
    for (i = 0; i < n; i++)
    {
        cout << "Enter your numbers of quiz " << i + 1 << " :";
        cin >> quiz_before[i];

        before_sum = before_sum + quiz_before[i];
    }
    //sorting- DESCENDING ORDER

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (quiz_before[i] < quiz_before[j])
            {
                temp = quiz_before[i];
                quiz_before[i] = quiz_before[j];
                quiz_before[j] = temp;
            }
        }
    }

    //print sorted array elements
    cout << "Sorted (Descending Order) Array elements:" << endl;
    for (i = 0; i < n; i++)
        cout << quiz_before[i] << "\n";
    cout << endl;

    //After QUIZ

    cout << "After quiz\n";
    for (i = 0; i < n; i++)
    {
        cout << "Enter your numbers of quiz " << i + 1 << " :";
        cin >> quiz_after[i];

        after_sum = after_sum + quiz_after[i];
    }

    //sorting - ASCENDING ORDER
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (quiz_after[i] > quiz_after[j])
            {
                temp = quiz_after[i];
                quiz_after[i] = quiz_after[j];
                quiz_after[j] = temp;
            }
        }
    }

    //print sorted array elements
    cout << "Sorted (Ascending Order) Array elements:" << endl;
    for (i = 0; i < n; i++)
        cout << quiz_after[i] << "\n";
    cout << endl;

    cout << "\nBefore MidTerm Quizzes Sum: "
         << before_sum;
    cout << "\nAfter MidTerm Quizzes Sum: "
         << after_sum;
}