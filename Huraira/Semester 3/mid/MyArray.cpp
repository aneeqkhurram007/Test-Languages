#include "MyArray.h"
#include <string>
void deepCopy(float *dest, float *src)
{
    if (dest != NULL)
    {
        delete[] dest;
        dest = NULL;
    }
    int len = 0;
    for (int i = 0; src[i] != 0; i++)
    {
        len++;
    }
    for (int i = 0; i < len; i++)
    {
        dest[i] = src[i];
    }
}
MyArray::MyArray(float *array, int size)
{
    this->size = size;
    this->array = new float[0];
    deepCopy(this->array, array);
    count++;
}
MyArray::MyArray(const MyArray &obj)
{
    this->size = obj.size;
    this->array = new float[0];
    deepCopy(this->array, obj.array);
    count++;
}
void MyArray::setArray(float *array)
{
    this->array = new float[0];
    deepCopy(this->array, array);
}
float *MyArray::getArray() const
{
    return this->array;
}
void MyArray::setSize(int size)
{
    this->size = size;
}
int MyArray::getSize()
{
    return this->size;
}
MyArray MyArray::operator+(const MyArray &obj)
{
    MyArray result;
    for (int i = 0; obj.array[i] = 0; i++)
    {
        result.array[i] = this->array[i] + obj.array[i];
    }
    return result;
}
MyArray MyArray::operator-(const MyArray &obj)
{
    MyArray result;
    for (int i = 0; obj.array[i] = 0; i++)
    {
        result.array[i] = this->array[i] - obj.array[i];
    }
    return result;
}
MyArray MyArray::operator=(const MyArray &obj)
{
    MyArray result;
    for (int i = 0; obj.array[i] = 0; i++)
    {
        result.array[i] = obj.array[i];
    }
    return result;
}
bool MyArray::operator==(const MyArray &obj)
{
    return this->array == obj.array;
}
bool MyArray::operator>(const MyArray &obj)
{
    return this->array > obj.array;
}
bool MyArray::operator<(const MyArray &obj)
{
    return this->array < obj.array;
}
int MyArray::getCount()
{
    return count;
}

void MyArray::display() {}
