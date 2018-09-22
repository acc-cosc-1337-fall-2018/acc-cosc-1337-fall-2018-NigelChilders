#include "dna.h"

int main()
{
	//call the dna functions from dna.h and display output
	//Use the function arguments from the test cases in dna_test.cpp
	//Example:
	/*
	auto point_mutation = get_point_mutations("GAGCCTACTAACGGGAT", "CATCGTAATGACGG")
	cout<<point_mutation;
	*/
	auto point_mutation = get_point_mutations("GAGCCTACTAACGGGAT", "CATCGTAATGACGG");
	std::cout << "Get Point Mutations:    " << point_mutation << std::endl;

	auto dna_complement = get_dna_complement("GAGCCTACTAACGGGAT");
	std::cout << "Get DNA Complement:     " << dna_complement << std::endl;

	auto transcribe_dna = transcribe_dna_into_rna("CATCGTAATGACGG");
	std::cout << "Get RNA Transcription:  " << transcribe_dna << std::endl;

	auto gc_content = get_gc_content("CCACCCTCGTGGTATGGCTAGGCATTCAGGAACCGGAGAACGCTTCAGACCAGCCCGGACTGGGAACCTGCGGGCAGTAGGTGGAAT");
	std::cout << "Get GC Content:         " << gc_content << std::endl;

	std::cout << " \nPress any key to continue\n";
	std::cin.ignore();

	return 0;
}