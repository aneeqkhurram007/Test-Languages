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
    MyArray(float *array = new float[0], int size = 0);
    MyArray(const MyArray &obj);
    ~MyArray();
    void setArray(float *array);
    float *getArray() const;
    void setSize(int size);
    int getSize();
    MyArray operator+(const MyArray &obj);
    MyArray operator-(const MyArray &obj);
    MyArray operator=(const MyArray &obj);
    bool operator==(const MyArray &obj);
    bool operator>(const MyArray &obj);
    bool operator<(const MyArray &obj);
    static int getCount();
    void deepCopy(float *dest, float *src);
    void display();
};