#include "vectors.h"


int get_max_from_vector(vector<int>& numbers) {
	int largest_element = *max_element(numbers.begin(), numbers.end());
	return largest_element;
}

int get_sum_of_squares(vector<int>& numbers) {
	int Square_Sum{ 0 };
	for (auto s : numbers) {
		Square_Sum += s * s;
	}
	return Square_Sum;
}


void replace(vector<string>& strings, const string& old, const string& new_val) {
	std::replace(strings.begin(), strings.end(), old, new_val);
}


bool is_prime(int number)
{
	bool isPrime{ true };
	for (int i = 2; i <= number / 2; ++i) {
		if (number % i == 0) {
			isPrime = false;
			break;
		}
	}

	return isPrime;
}

vector<int> vector_of_primes(int n)
{
	vector<int> list{};
	for (int i = 1; i <= n; ++i) {
		if (is_prime(i)) {
			list.push_back(i);
		}
	}

	return list;
}

/*
//write the code for function replace here
void replace(vector<string>& strings, const string& old, const string& new_val)
{
	//write code here. 
	//Remember passing by reference without keyword const makes the string vector
	//read/write meaning you can modify strings in the vector
	//Also there is no need to return the strings vector because a reference
	//points to a previously declared vector of strings variable(see test case 
	//in vectors_test.cp)


}

//write is_prime function code here



*/
//write vector_of_primes function code here