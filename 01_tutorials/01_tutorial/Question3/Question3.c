/*
 * Question3.c
 * Created on: 09/03/2014
 * Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int number1, number2, number3;

	printf("Enter a number:\n");
	scanf("%d", &number1);
	printf("Enter another number:\n");
	scanf("%d", &number2);
	printf("Enter yet another number:\n");
	scanf("%d", &number3);

	printf( "Sum is %d\n", number1 + number2 + number3 );
	printf( "Average is %d\n", (number1 + number2 + number3)/3 );
	printf( "Product is %d\n", number1 * number2 * number3 );

	if (number1 < number2 && number1 < number3){
		printf( "%d is the smallest\n", number1 );
	}

	if (number1 > number2 && number2 < number3){
		printf( "%d is the smallest\n", number2 );
	}

	if (number1 > number3 && number2 > number3){
		printf( "%d is the smallest\n", number3 );
	}

	if (number1 > number2 && number1 > number3){
		printf( "%d is the largest\n", number1 );
	}

	if (number1 < number2 && number2 > number3){
		printf( "%d is the largest\n", number2 );
	}

	if (number3 > number2 && number1 < number3){
		printf( "%d is the largest\n", number3 );
	}

	return 0;
}


