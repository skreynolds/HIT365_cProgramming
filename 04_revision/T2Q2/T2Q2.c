/*
 * T2Q2.c
 * Created on: 14/06/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	float principal, rate, term;

	while(1){

		printf("Enter loan principal (-1 to end): ");
		scanf("%f", &principal);

		if (principal == -1){
			break;
		}

		printf("\nEnter interest rate: ");
		scanf("%f", &rate);
		printf("\nEnter loan term: ");
		scanf("%f", &term);

		printf("\n\nThe interest charge is $%.2f\n", principal*rate*(term/365));

	}
	return 0;
}
