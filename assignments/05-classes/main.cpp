#include "invoice.h"
#include "invoice_utility.h"
#include <iostream>

int main() {
/*
	InvoiceDetail ID(10, 10);
	double value = ID.get_extended_cost();

	std::cout << "10 Units at 10 USD:   $" << value << std::endl;

	Invoice Inv;
	InvoiceDetail Detail;
	std::cin >> Detail;

	Inv.add_invoice_detail(InvoiceDetail(10, 10));
	Inv.add_invoice_detail(InvoiceDetail(5, 5));
	Inv.add_invoice_detail(InvoiceDetail(100, 2));

	std::cout << "Invoice Total Amt:    $" << Inv.get_total() << std::endl;*/

	Invoice Inv;
	InvoiceDetail Detail;
	std::cin >> Detail;
	Inv.add_invoice_detail(Detail);
	Inv.add_invoice_detail(InvoiceDetail(5, 5));
	Inv.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice Sec;
	Sec.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice result = Inv + Sec;
	std::cout << result.get_total();

	Invoice_Utility test(25);
	test.add_invoice_detail(InvoiceDetail(1, 25));
	
	std::cout << "Invoice Utility result:  " << test.get_total << std::endl;
	
	std::cout << " \nPress any key to continue\n";
	std::cin.ignore();

	return 0;
}