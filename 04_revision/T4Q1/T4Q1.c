/*
 * T4Q1.c
 * Created on: 14/06/2014
 * Author: Shane
 */

#include <stdio.h>
#include <math.h>

int main(void){

	float number;

	while (1){

		printf("Enter a number to be rounded (-1 to end): ");
		scanf("%f", &number);

		if (number == -1){
			break;
		}

		printf("\nThe number %f is rounded to %.0f\n", number, floor(number + 0.5));
	}

	return 0;

}


