#include "my_vector.h"

using std::cout;
//
Vector::Vector(int s)
    : size{}, capacity(s), elements{new int[s]}
{
    cout<<"new memory created at "<<elements<<"\n";
}

Vector::Vector(const Vector& v)
    : size{v.size}, capacity{v.capacity}, elements{new int[v.size]}
{
    cout<<"Copy constructor - created memory at "<<elements<<"\n";
    for(auto i=0; i < v.size; i++)
    {
        elements[i] = v.elements[i];
    }
}

Vector::~Vector()
{
    cout<<"delete the new memory\n";
    delete[] elements;
}

//NOT A CLASS FUNCTION; FREE VECTORS
void use_vector()
{
    Vector v(3);
    Vector v1 = v;
}