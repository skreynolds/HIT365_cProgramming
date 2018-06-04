/*
 * T2Q1.c
 * Created on: 14/06/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	float sales;

	while (1){

		printf("Enter sales in dollars (-1 to end):");
		scanf("%f", &sales);

		if (sales == -1){
			break;
		}

		printf("\nSalary is $%.2f\n\n", 200 + sales*.09);

	}
	return 0;
}


