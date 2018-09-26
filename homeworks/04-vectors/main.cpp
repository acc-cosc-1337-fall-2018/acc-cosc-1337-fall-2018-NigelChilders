#include "vectors.h"
#include <iostream>

using std::cout;
//dont forget using statement for cout object
int main()
{
	vector<int> First_Vect = { 4, 5, 1, 50, 6, 77, 0 };
	int Max_Val = get_max_from_vector(First_Vect);
	cout << "Max Value From Vector:     " << Max_Val << std::endl;
	
	vector<int> Second_Vect = { 2, 3, 4 };
	int SquareSum_Val = get_sum_of_squares(Second_Vect);
	cout << "Sum of Squares in Vector:  " << SquareSum_Val << std::endl;
	
	vector<string> Third_Vect = { "Joe", "joe", "mary" };
	replace(Third_Vect, "joe", "John");
	cout << "List of strings:           ";
	for (auto i : Third_Vect)
		cout << i << ' ';
	cout << std::endl;

	cout << "Test if 3 is Prime:        ";
	if (is_prime(3)) {
		cout << "True";
	}
	else {
		cout << "False";
	}
	cout << std::endl;

	vector<int> Fourth_Vect = vector_of_primes(42);
	cout << "Vector of Primes [42]:     ";
	for (auto i : Fourth_Vect)
		cout << i << ' ';
	cout << std::endl;

	//Write code to call get_max_from_vector with argument
	//vector of values 4, 5, 1, 50, 6, 77, 0 and display max


	//write code to call the sum_of_square function with argument
	//vector of values 2, 3, 4 and display result


	//write code to call the replace function with argument 
	//vector of strings "Joe", "joe", "mary", old argument "joe", new argument "John"


	//write code to call is_prime with value 3 output result


	//write code to call vector_of_primes, save return value to a vector of ints
	//output each int in the return vector

	std::cout << " \nPress any key to continue\n";
	std::cin.ignore();

	return 0;
}