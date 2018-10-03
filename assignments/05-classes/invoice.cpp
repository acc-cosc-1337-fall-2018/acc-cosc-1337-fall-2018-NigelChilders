#include "invoice.h"

void add_invoice_detail(InvoiceDetail detail) {
	invoice_details.push_back(detail);
}

double get_total() const {
	double total{ 0.00 };
	for (auto s : invoice_details) {
		total += s.get_extended_cost();
	}
	return total;
}