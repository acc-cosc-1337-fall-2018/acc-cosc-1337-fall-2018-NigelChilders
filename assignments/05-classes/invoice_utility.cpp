#include "invoice_utility.h"

double Invoice_Utility::get_total() const {
	return Invoice::get_total() + fixed_costs;
}