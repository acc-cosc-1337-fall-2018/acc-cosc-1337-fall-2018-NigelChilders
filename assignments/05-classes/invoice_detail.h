#ifndef INVOICE_DETAIL_H
#define INVOICE_DETAIL_H

class InvoiceDetail {
public:
	InvoiceDetail(double c, int u) : cost(c), units(u) {};
	double get_extended_cost();

private:
	double cost;
	int units;
};

#endif //INVOICE_DETAIL_H