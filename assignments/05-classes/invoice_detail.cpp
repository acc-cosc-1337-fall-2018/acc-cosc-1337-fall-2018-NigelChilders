#include "invoice_detail.h"

double InvoiceDetail::get_extended_cost() {
	double value = InvoiceDetail::cost * InvoiceDetail::units;
	return value;
}