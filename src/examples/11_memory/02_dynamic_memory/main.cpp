#include<iostream>
#include<memory>

using std::cout; using std::unique_ptr; using std::make_unique; using std::shared_ptr; using std::make_shared;

int main() 
{
	int num = 5;
	int* num_ptr = &num;//point to the address of num

	//string vector -- ptr variable new
	//very prone to bugs
	int* num_dyn = new int(10); //create the value 10 on the heap
	cout<<"Raw/legacy pointer: "<<*num_dyn<<"\n\n";
	//use the num_dyn variable
	delete num_dyn;//remove the data from the heap

	//SMART POINTERS
	unique_ptr<int> num_up = make_unique<int>(100);
	cout<<"Unique pointer: "<<*num_up<<"\n";
	//do not have to call the delete keyword to remove data from the heap

	shared_ptr<int> num_sp = make_unique<int>(200);
	cout<<"Shared  pointer: "<<*num_sp<<"\n";
	shared_ptr<int> num_sp2 = num_sp;
	cout<<"Shared  pointer: "<<*num_sp2<<"\n";
	shared_ptr<int> num_sp3 = num_sp;
	cout<<"Shared  pointer: "<<*num_sp3<<"\n";

	std::weak_ptr<int> gw;
	auto sp = std::make_shared<int>(42);
	gw = sp;
	cout<<"Weak ptr: "<<gw.use_count()<<"\n";
	
	return 0;
}