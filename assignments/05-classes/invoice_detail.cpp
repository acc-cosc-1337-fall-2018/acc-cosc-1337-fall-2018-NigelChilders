#include "invoice_detail.h"

double InvoiceDetail::get_extended_cost() {
	double value = InvoiceDetail::cost * InvoiceDetail::units;
	return value;
}

std::istream & operator>>(std::istream& in, InvoiceDetail& d) {
	std::cout << "Enter Cost:   ";
	in >> d.cost;
	std::cout << "Enter Units:  ";
	in >> d.units;

	return in;
}