#ifndef INVOICE_H
#define INVOICE_H
#include <vector>
#include "invoice_detail.h"

class Invoice {
public:
	void add_invoice_detail(InvoiceDetail detail);
	double get_total() const;

private:
	std::vector<InvoiceDetail> invoice_details;

};

#endif //INVOICE_H
/* Create a private variable vector of InvoiceDetails named invoice_details.
     Create a void class function with add_invoice_detail with an InvoiceDetail parameter
             add a value to the invoice_details variable.
     Create a value return function that returns double named get_total that sums up the get_extended_cost of all
     values in the private vector invoice_details.*/