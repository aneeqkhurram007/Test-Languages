#include <iostream>
using namespace std;

int SIZE;

void total_marks(int[]);
void min_marks(int[]);
void max_marks(int[]);
void average_marks(int[]);

int main()
{
    int marks_list[] = {50, 75, 62, 91, 82, 63};
    SIZE = sizeof(marks_list) / sizeof(marks_list[0]);
    total_marks(marks_list);
    min_marks(marks_list);
    max_marks(marks_list);
    average_marks(marks_list);
}
void total_marks(int arr[])
{
    int total = 0;
    for (int i = 0; i < SIZE; i++)
    {
        total += arr[i];
    }
    cout << "Total is " << total << endl;
}
void min_marks(int arr[])
{
    int min;
    min = arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Minimum is " << min << endl;
}
void max_marks(int arr[])
{

    int max;
    max = arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Maximum is " << max << endl;
}
void average_marks(int arr[])
{
    int total = 0;
    float average = 0;
    for (int i = 0; i < SIZE; i++)
    {
        total += arr[i];
    }
    average = total / SIZE;
    cout << "Average is " << average << endl;
}