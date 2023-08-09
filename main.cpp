#include <iostream>
#include "exchange.h"


int main() {
	
	int status = 1;
	
	while(status) {

	Exchange newExchange;

	newExchange.inputTask();
	newExchange.choiceTask();
	newExchange.exchangeResult();
	status = newExchange.receipt();
	}

	return 0;
}
