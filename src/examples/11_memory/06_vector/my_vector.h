#include <iostream>

#ifndef VECTOR_H
#define VECTOR_H
//
class Vector
{
public:
    Vector(int size);
    Vector(const Vector& v);//copy constructor Rule 1 Rule of 3(legacy C++)
    Vector& operator=(const Vector& v);//copy assignment Rule 2 of 3
    Vector(Vector&& v);
    int Size(){return size;}
    int Capacity(){return capacity;}
    int& operator[](int index){return elements[index];}
    int& operator[](int index)const{return elements[index];}
    ~Vector();//Rule 3 of 3 in legacy C++
private:
    int* elements;
    int size{0};
    int capacity;
};

#endif