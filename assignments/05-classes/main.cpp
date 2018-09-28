#include "invoice_detail.h"
#include <iostream>

int main() {
	InvoiceDetail ID(10, 10);
	double value = ID.get_extended_cost();

	std::cout << "10 Units at 10 USD:   $" << value << std::endl;

	std::cout << " \nPress any key to continue\n";
	std::cin.ignore();

	return 0;
}