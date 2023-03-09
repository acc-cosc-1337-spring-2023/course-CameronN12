#include "ref_pointers.h"

//
void ref_ptr_params(int &num1, int *num2)
{
    num1 = 10;
    *num2 = 20;//* means dereference the pointer
                //change the value of the variable that num2 points to
}
