#include "invoice_progress.h"

double Invoice_Progress::get_total() const {
	return fixed_price - Invoice::get_total();
}