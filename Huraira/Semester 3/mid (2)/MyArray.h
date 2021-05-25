#include <iostream>
#pragma once
using namespace std;
class MyArray
{
private:
    float *array;
    int size;
    static int count;

public:
    MyArray();
    MyArray(float *array, int size);
    MyArray(const MyArray &obj);
    void setSize(const int size);
    int getSize() const;
    static int getCount();
    void setArray(float *arr);
    float *getArray();
    MyArray operator+(const MyArray &obj);
    MyArray operator-(const MyArray &obj);
    MyArray operator=(const MyArray &obj);
    bool operator>(const MyArray &obj);
    bool operator<(const MyArray &obj);
    bool operator==(const MyArray &obj);
    void display();
    float *deepCopy(float *src);
    ~MyArray();
};
