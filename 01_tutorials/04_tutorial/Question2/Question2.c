/*
 * Question2.c
 * Created on: 25/03/2014
 * Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>

float calculateCharges(int hours);

int main(void){

	int i = 1, hours;
	float charges;

	while(i <= 3){

		printf("Enter hours for customer: \n");
		scanf("%d", &hours);

		charges = calculateCharges(hours);

		printf("Customer %d")
	}
	return 0;
}

float calculateCharges(int hours){

	float charges = 2;

	if (hours >= 3 && hours < 24){

		charges += (hours - 3) * 0.5;

	}

	if (charges > 10){

		charges = 10;

	}

	return charges;
}


