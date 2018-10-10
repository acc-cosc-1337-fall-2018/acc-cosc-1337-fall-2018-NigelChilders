#ifndef INVOICE_UTILITY_H
#define INVOICE_UTILITY_H
#include "invoice.h"

class Invoice_Utility : public Invoice {
public:
	Invoice_Utility(double fc) : fixed_costs(fc) {}
	double get_total() const;

private:
	double fixed_costs;
};

#endif //INVOICE_UTILITY_H