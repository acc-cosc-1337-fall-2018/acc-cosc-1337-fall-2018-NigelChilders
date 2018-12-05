#include "basics.h"

int sum_numbers(int num1, int num2)
{
	return num1 + num2;
}

int multiply_numbers(int num1, int num2) 
{
	return num1 * num2;
}

void pass_by_val_by_ref(int val, int& ref)
{
	val = 99;
	ref = 99;
}

void const_pass_by_val_by_ref(int val, const int & ref)
{
	val = 99;
	//ref = 99; ref can't be modified because it's a const parameter
}

void pass_by_pointer(int * ptr)
{
	//ptr we're using the address
	*ptr = 99; //*ptr get the value of address pointed to
}

void initialize_vector_of_ints()
{
	std::vector<int> numbers = { 5,7,9,4,6,8 };
	numbers.push_back(1);

	for (auto n : numbers) {
		std::cout << n << std::endl;
	}
}

void initialize_vector_of_strings()
{
}

basics::basics()
{
	std::cout << "Constructor...\n";
}

basics::basics(basics & basic)
{
	ptr_num = new int(*basic.ptr_num);
}

void basics::set_ptr_num(int val)
{
	*ptr_num = val;
}

basics & basics::operator=(basics other)
{
	ptr_num = new int(*other.ptr_num);
	return *this;
}

basics::~basics()
{
	std::cout << "Num: " << num << "    Ptr num: " << *ptr_num << "    Ptr Add: " << ptr_num << std::endl;
	std::cout << " Get Rekt! \n";
}
