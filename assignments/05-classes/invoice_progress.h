#ifndef INVOICE_PROGRESS_H
#define INVOICE_PROGRESS_H
#include "invoice.h"


class Invoice_Progress : public Invoice {
public:
	Invoice_Progress(double fp) : fixed_price(fp) {}
	double get_total() const;

private:
	double fixed_price;

};

#endif //INVOICE_PROGRESS_H
