#ifndef INVOICE_DETAIL_H
#define INVOICE_DETAIL_H
#include <iostream>

class InvoiceDetail {
public:
	InvoiceDetail() = default;
	InvoiceDetail(double c, int u) : cost(c), units(u) {};
	double get_extended_cost();
	friend std::istream & operator>>(std::istream& in, InvoiceDetail& d);

private:
	double cost;
	int units;
};

#endif //INVOICE_DETAIL_H