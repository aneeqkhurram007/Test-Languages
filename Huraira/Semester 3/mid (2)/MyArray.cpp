#include "MyArray.h"

MyArray::MyArray()
{
    size = 0;
    array = new float[1];
    count++;
}
MyArray::MyArray(float *arr, int siz)
{
    size = siz;
    array = deepCopy(arr);
    count++;
}
MyArray ::MyArray(const MyArray &obj)
{
    size = obj.size;
    array = deepCopy(obj.array);
    count++;
}
void MyArray::setSize(const int size)
{
    this->size = size;
}
int MyArray::getSize() const
{
    return this->size;
}
int MyArray::getCount()
{
    return count;
}
void MyArray::setArray(float *arr)
{
    array = deepCopy(arr);
}
float *MyArray::getArray()
{
    return this->array;
}
MyArray MyArray::operator+(const MyArray &obj)
{
    MyArray result;
    int resSize = this->size + obj.size;
    result.setSize(resSize);

    for (int i = 0; i < this->size && i < obj.size; i++)
    {
        result.array[i] = this->array[i] + obj.array[i];
    }
    return result;
}
MyArray MyArray::operator-(const MyArray &obj)
{
    MyArray result;
    int resSize = this->size - obj.size;
    result.setSize(resSize);

    for (int i = 0; i < this->size && i < obj.size; i++)
    {
        result.array[i] = this->array[i] - obj.array[i];
    }
    return result;
}
MyArray MyArray::operator=(const MyArray &obj)
{
    MyArray result;
    int resSize = this->size;
    result.setSize(resSize);

    for (int i = 0; i < obj.size; i++)
    {
        result.array[i] = obj.array[i];
    }
    return result;
}
bool MyArray::operator>(const MyArray &obj)
{

    return this->size > obj.size;
}
bool MyArray::operator<(const MyArray &obj)
{
    return this->size < obj.size;
}
bool MyArray::operator==(const MyArray &obj)
{
    return this->size == obj.size;
}
void MyArray::display()
{
    cout << "Size: " << this->size << endl;
    cout << "Array: ";
    for (int i = 0; i < this->size; i++)
    {
        cout << this->array[i] << " ";
    }
}
MyArray ::~MyArray() {}
float *MyArray::deepCopy(float *src)
{
    float *dest = new float[size];
    for (int i = 0; i < size; i++)
    {
        dest[i] = src[i];
    }
    return dest;
}