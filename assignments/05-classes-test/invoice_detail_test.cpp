#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "invoice.h"

TEST_CASE("Test get_extended_cost")
{
	InvoiceDetail ID(10, 10);
	REQUIRE(ID.get_extended_cost() == 100.00);

}

TEST_CASE("Test invoice get total")
{
	Invoice Inv;
	Inv.add_invoice_detail(InvoiceDetail(10, 10));
	Inv.add_invoice_detail(InvoiceDetail(5, 5));
	Inv.add_invoice_detail(InvoiceDetail(100, 2));

	REQUIRE(Inv.get_total() == 325);
}