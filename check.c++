#include <iostream>
using namespace std;
int main()
{
    int quizNo = 0, marks = 0,
        sum_before = 0, sum_after = 0, i;

    cout << "Please enter the total number of quizzes : ";
    cin >> quizNo;
    int beforeQuiz[quizNo], afterQuiz[quizNo];
    //int midQuizzes = quizNo / 2;
    //int uptoMidTermQuizzes[midQuizzes], allQuizes[quizNo];
    //Quizes Before Mid Term
    cout << "\nQuiz before MidTerm\n";
    for (i = 0; i < quizNo; i++)
    {

        cout << "Please enter the marks of quiz " << i + 1 << " : ";
        cin >> beforeQuiz[i];
        sum_before = sum_before + beforeQuiz[i];
    }

    //Bubble Sort starts from here
    for (int i = 0; i < quizNo; i++)
    {
        for (int j = i + 1; j < quizNo; j++)
            if (beforeQuiz[i] < beforeQuiz[j])
            {
                int temp = beforeQuiz[i];
                beforeQuiz[i] = beforeQuiz[j];
                beforeQuiz[j] = temp;
            }
    }
    //Total marks of all quizzes are
    cout << "\nTotal Marks of quizzes before midTerms are : " << sum_before << "\n";

    for (i = 0; i < quizNo; i++)
    {
        cout << "Marks of quiz sorted from higher to lower " << i + 1 << " is: " << beforeQuiz[i] << endl;
    }

    //Quizes After Mid Term
    cout << "\nQuiz After MidTerm\n";
    for (i = 0; i < quizNo; i++)
    {

        cout << "Please enter the marks of quiz " << i + 1 << " : ";
        cin >> afterQuiz[i];
        sum_after = sum_after + afterQuiz[i];
    }

    //Bubble Sort starts from here
    for (int i = 0; i < quizNo; i++)
    {
        for (int j = i + 1; j < quizNo; j++)
            if (afterQuiz[i] > afterQuiz[j])
            {
                int temp = afterQuiz[i];
                afterQuiz[i] = afterQuiz[j];
                afterQuiz[j] = temp;
            }
    }
    //Total marks of all quizzes are
    cout << "\nTotal Marks of quizzes after midTerms are : " << sum_after << "\n";

    for (i = 0; i < quizNo; i++)
    {
        cout << "Marks of quiz sorted from lower to higher " << i + 1 << " is: " << afterQuiz[i] << endl;
    }
    //RESIDUAL
    // cout << endl;
    // //Print the quizzes marks upto mid term exam in decending order
    // cout << "\nThe marks of quizzes from higher to lower  are given below" << endl;
    // for (int i = no; i > 0; i--)
    // {
    //     cout << uptoMidTermQuizzes[i] << " ";
    //     sum += uptoMidTermQuizzes[i]; //sum of quizzes before mid
    // }
    // cout << "\nSum of Quizzes upto mid is from higher to lower is:" << sum << endl;
    //
    // cout << "\nThe marks of quizzes from lower to higher are given below" << endl;
    // //Print the quizzes marks upto mid term exam in acending order
    // for (int j = 1; j <= midQuizzes; j++)
    // {
    //     cout << uptoMidTermQuizzes[j] << " "; // To print an array
    // }
    // cout << "\nSum of Quizzes upto mid is from lower to higher:" << sum << endl;
}