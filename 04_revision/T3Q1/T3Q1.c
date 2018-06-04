/*
 * T3Q1.c
 * Created on: 14/06/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	int account;
	float limit, balance;

	while (1){

		printf("Enter customer account number (-1 to end): ");
		scanf("%d", &account);

		if (account == -1){
			break;
		}

		printf("\nEnter customer credit limit and current balance:");
		scanf("%f%f", &limit, &balance);

		printf("\nCustomer account number %d has new credit limit $%.2f.", account, limit/2);

		if (balance > (limit/2)){
			printf("\nCustomer is over their limit.\n");
		}

	}
	return 0;
}


