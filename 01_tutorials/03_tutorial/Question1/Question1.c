/* Question1.c
 * Created on: 18/03/2014
 * Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int customerAccount, i;
	float creditLimitOld, creditLimitNew, currentBalance;

	for (i = 1; i <= 3; i++){

		printf("Customer's account number?\n");
		scanf("%d", &customerAccount);

		printf("Customer's credit limit before the recession?\n");
		scanf("%f", &creditLimitOld);

		printf("Customer's current balance?\n");
		scanf("%f", &currentBalance);

		creditLimitNew = 0.5 * creditLimitOld;
		printf("New credit limit for customer %d is $%.2f\n", customerAccount, creditLimitNew);

		if(currentBalance > creditLimitNew){
			printf("Customer %d has exceeded their new credit limit\n", customerAccount);
		}
	}

	return 0;

}


