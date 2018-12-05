#include <vector>
#include <iostream>

int sum_numbers(int num1, int num2);

int multiply_numbers(int num1, int num2);

void pass_by_val_by_ref(int val, int& ref);

void const_pass_by_val_by_ref(int val, const int& ref);

void pass_by_pointer(int* ptr);

void initialize_vector_of_ints();

void initialize_vector_of_strings();

#ifndef BASICS_H
#define BASICS_H

class basics {
public:
	basics();
	basics(basics& basic);
	void set_ptr_num(int val);
	basics& operator=(basics other);
	~basics();

protected:

private:
	int num{ 5 };
	int* ptr_num = new int(10);
};
#endif //!BASICS_H