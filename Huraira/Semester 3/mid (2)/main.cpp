#include "MyArray.h"
int main()
{
    int size;
    float *ptr;
    cout << "Enter the size of your array" << endl;
    cin >> size;
    ptr = new float[size];
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ptr[i];
    }
    MyArray a1(ptr, size);
    MyArray a2 = a1;
    int len = a1.getSize();
    float *res;
    res = new float[len];
    res = a1.getArray();
    for (int i = 0; i < len; i++)
    {
        cout << res[i];
    }
    // incase of array, compare or add or perform any operation index wise
    if (a1 == a2) // overload == operator to compare two objects
    {
        cout << "Both arrays are equal" << endl;
    }
    else
    {
        cout << "Both arrays are not equal" << endl;
    }
    MyArray a3;
    a3 = a1 + a2; // overload the + operator to add two objects
    a3.display();
    MyArray a4;
    a4 = a1 - a2; // overload the - operator to subtract two objects
    a4.display();
    MyArray a5;
    a5 = a4; // overload the = operator to assign a4 to a5
    a5.display();
    // overload > and < operator to check which object is greater
    if (a3 > a4)
    {
        cout << "Array3 is greater than array4" << endl;
    }
    else if (a3 < a4)
    {
        cout << "Array4 is greater than array3" << endl;
    }
    cout << "Final Count: " << MyArray::getCount() << endl;
    return 0;
}