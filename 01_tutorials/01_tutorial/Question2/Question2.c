/*
 * Question2.c
 * Created on: 09/03/2014
 * Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int number1;
	int number2;

	printf("Enter an integer:\n");
	scanf("%d", &number1);

	printf("Enter another integer:\n");
	scanf("%d", &number2);

	if (number1 == number2){
		printf("These number are equal.\n");
	}

	if (number1 > number2){
		printf("%d is larger.\n", number1);
	}

	if (number1 < number2){
		printf("%d is larger.\n", number2);
	}

	return 0;
}


