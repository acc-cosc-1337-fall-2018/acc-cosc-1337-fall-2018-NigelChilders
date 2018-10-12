#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "invoice.h"
#include "invoice_utility.h"
#include "invoice_progress.h"

TEST_CASE("Test get_extended_cost") {
	InvoiceDetail ID(10, 10);
	REQUIRE(ID.get_extended_cost() == 100.00);

}

TEST_CASE("Test invoice get total") {
	Invoice Inv;
	Inv.add_invoice_detail(InvoiceDetail(10, 10));
	Inv.add_invoice_detail(InvoiceDetail(5, 5));
	Inv.add_invoice_detail(InvoiceDetail(100, 2));

	REQUIRE(Inv.get_total() == 325);
}

TEST_CASE("Test invoice operator overloading") {
	Invoice Inv;
	Inv.add_invoice_detail(InvoiceDetail(10, 10));
	Inv.add_invoice_detail(InvoiceDetail(5, 5));
	Inv.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice Sec;
	Sec.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice result = Inv + Sec;
	REQUIRE(result.get_total() == 525.00);
}

TEST_CASE("test invoice utility") {
	Invoice_Utility Inv(25);
	Inv.add_invoice_detail(InvoiceDetail(100, 1));

	REQUIRE(Inv.get_total() == 125);
}

TEST_CASE("test invprog get total") {
	Invoice_Progress Inv(250);
	Inv.add_invoice_detail(InvoiceDetail(100, 1));

	REQUIRE(Inv.get_total() == 150);
}
