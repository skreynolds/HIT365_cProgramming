/*
 * T3Q3.c
 * Created on: 14/06/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	int product, quantity;
	float total = 0.0;

	while (1){
		printf("Read 2 numbers in, product number and the quantity sold (-1 to end): ");
		scanf("%d%d", &product, &quantity);

		if (product == -1){
			break;
		}

		switch(product){

			case 1:
				total += quantity*2.98;
				break;

			case 2:
				total += quantity*4.5;
				break;

			case 3:
				total += quantity*9.98;
				break;

			case 4:
				total += quantity*4.49;
				break;

			case 5:
				total += quantity*6.87;
				break;

			default:
				printf("\nYou made and error, bro.");
				break;
		}

	}

	printf("\nThe total is %.2f", total);
	return 0;
}


