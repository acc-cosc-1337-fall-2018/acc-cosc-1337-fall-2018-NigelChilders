#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "invoice_detail.h"

TEST_CASE("Test get_extended_cost")
{
	InvoiceDetail ID(10, 10);
	REQUIRE(ID.get_extended_cost() == 100.00);

}