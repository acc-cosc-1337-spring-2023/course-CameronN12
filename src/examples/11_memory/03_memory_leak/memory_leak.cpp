#include "memory_leak.h"

using std::cout; using std::shared_ptr;

void memory_leak()
{
    int* ptr_num = new int(5);
}

void use_dynamic_memory_array(const int num)
{
    int* nums = new int[num];//create memory
    //use memory
    cout<<nums[0]<<"\n";
    cout<<nums[1]<<"\n";
    cout<<nums[2]<<"\n";
    cout<<*nums<<"\n";//displays the first element

    //delete memory
    delete nums;
}

int* get_dynamic_memory(const int num)
{
    cout<<"Creating dynamic memory...\n";
    return new int[num];
}

void limit_dynamic_memory_scope(const int num)
{
    int* nums = get_dynamic_memory(num);//get created memory
    //use memory
    for(int i=0; i < num; i++)
    {
        cout<<nums[i]<<"\n";
    }
    //delete memory
    delete nums;
}

void delete_dynamic_memory(int* array)
{
    cout<<"Deleting dynamic memory...\n";
    delete array;
}

void use_dynamic_array(const int num)
{
    //create memory
    shared_ptr<int[]> nums(get_dynamic_memory(num), delete_dynamic_memory);
    //use memory
    nums[0] = 10;
    cout<<nums[0]<<"\n";

    //do not have to worry about calling delete; share_ptr takes care of that for us
    cout<<"Exiting use dynamic memory function\n";
}