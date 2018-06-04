/*
 * Question3.c
 * Created on: 19/03/2014
 * Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int productNumber;
	float quantity;

	printf("Enter the product number:\n");
	scanf("%d", &productNumber);

	printf("Enter the quantity sold:\n");
	scanf("%f", &quantity);

	if(productNumber >= 1 && productNumber <= 5){

		switch(productNumber){

			case 1:
			printf("The aggregate value of product 1 sold was: $%.2f\n", quantity * 2.98);
			break;

			case 2:
			printf("The aggregate value of product 2 sold was: $%.2f\n", quantity * 4.5);
			break;

			case 3:
			printf("The aggregate value of product 3 sold was: $%.2f\n", quantity * 9.98);
			break;

			case 4:
			printf("The aggregate value of product 4 sold was: $%.2f", quantity * 4.49);
			break;

			case 5:
			printf("The aggregate value of product 5 sold was: $%.2f", quantity * 6.87);
			break;
		}
	}

	return 0;

}
