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

/*
1-Create temporary memory for v1
2-Copy values from v into v1 temporary memory
3-Delete v1 elements memory
4-Point v1 elements to temporary memory
5-Set v1 size to v.size
6-Return a reference to vector using (this)
*/
Vector::Vector& operator=(const Vector& v)
{
    int* temp = new int[v.size];

    for(auto i=0; i < v.size; i++)
    {
        temp[i] = v.elements[i];
    }

    cout<<"copy assignment delete memory at "<<elements;
    delete[] elements;
    
    elements = temp;
    temp = nullptr;

    cout<<"copy assignment - create memory at "<<elements<<"\n";
    size = v.size;

    return *this;//returns a reference to itself
}

/*
1-Get v.elements memory(steal the pointer/guts)
2-Get size from v
3-point v.elements to nothing(nullptr)
4-set v size to 0
*/
Vector::Vector(Vector&& v)
: size{v.size}, elements{v.elements}
{
    cout<<"Move constructor switched pointer "<<elements<<"\n";
    v.elements = nullptr;
    v.size = 0;
}

//NOT A CLASS FUNCTION; FREE VECTORS
void use_vector()
{
    Vector v(3);
    Vector v1 = v;
}