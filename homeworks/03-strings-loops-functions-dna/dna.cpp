#include<math.h>
#include "dna.h"

int get_point_mutations(std::string dna1, std::string dna2) {	//dna1 and dna2 represent two provided DNA strings.
	int HamDist{ 0 };		//Hamming distance (initialization)

	auto size = dna1.size();//sets size for loops

	if (dna1.size() != dna2.size()) {
		return -1;			//if not equal length, returns -1 value.
	}
	else {
		for (unsigned int i = 0; i < size; ++i) {
			if (dna1[i] != dna2[i]) {
				++HamDist;
			}
		}
		return HamDist;		//Sends final Hamming Distance result
	}
}

//write function code for std::string get_dna_complement(std::string dna)
std::string get_dna_complement(std::string dna) {
	auto size{ dna.size() }; //get the size of string let auto handle the data type
	auto toggle{ dna.size() };
	std::string setup;
	std::string dnaComp;

	for (unsigned int i = 0; i <= size; ++i) {
		setup += dna[toggle];
		--toggle;
	}

	for (unsigned int i = 1; i <= size; ++i) {
		if (setup[i] == 'A') { dnaComp += 'T'; }
		else
			if (setup[i] == 'T') { dnaComp += 'A'; }
			else
				if (setup[i] == 'C') { dnaComp += 'G'; }
				else
					if (setup[i] == 'G') { dnaComp += 'C'; }
					else dnaComp += 'x';
	}

	return dnaComp;
}

//write function code for std::string transcribe_dna_into_rna(std::string dna);
std::string transcribe_dna_into_rna(std::string dna) {
	auto size = dna.size(); //get the size of string let auto handle the data type

	std::string rna{ };

	--size;

	for (unsigned int i = 0; i <= size; ++i) {
		if (dna[i] == 'T') {
			rna += 'U';
		}
		else (rna += dna[i]);
	}
	return rna;
}


double get_gc_content(std::string dna)
{
	auto size = dna.size(); //get the size of string let auto handle the data type
	auto gc_count{ 0 }; //initialize to 0 (int) let auto handle data type

	//for ranged loop, for each character in loop, s holds one char
	//auto determines data type in this case s is a char data type
	for (auto s : dna)
	{
		if (s == 'C' || s == 'G') {
			++gc_count;
		}

		//in C++ logical and is && and logical or is ||
		//usage (and) condition1 && condition2 --- usage (or) condition1 || condition2 
		//write code to determine if s is 'C' or 'G' then increment gc_count by 1


	}

	//dividing two integers nets an integer
	//here we need to convert one of the integers to double to get double division
	//that is a result with decimal values
	//static_cast converts a data type from one to another
	//here temporarily convert size to double
	auto gc_content = (gc_count / static_cast<double>(size))*100;

	//custom function to round to a desired precision
	return round_to_precision(gc_content, 2);
}

double round_to_precision(double number, int precision)
{
	return (std::round(number * std::pow(10, precision))) / std::pow(10, precision);
}
