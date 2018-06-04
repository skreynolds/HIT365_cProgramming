/*
 * Question1.c
 * Created on: 25/03/2014
 * Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

	int i;
	float x, y;

	for (i = 1; i <= 3; i++){

		printf("Enter a number: \n");
		scanf("%f", &x);

		y = floor(x + 0.5);

		printf("The original number is %.2f\n", x);
		printf("The rounded number is %.2f\n", y);

	}

	return 0;
}


