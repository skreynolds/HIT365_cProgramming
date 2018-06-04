/*
 * Tutorial 1 Question1.c
 * Created on: 09/03/2014
 * Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int integer1; /* first number to be input by user */
	int integer2; /* second number to be input by user */

	printf( "Enter first integer\n" ); /* prompt */
	scanf("%d", &integer1);

	printf( "Enter second integer\n" ); /* prompt */
	scanf("%d", &integer2);

	printf("The quotient is %d\n", integer1 + integer2);
	printf("The product is %d\n", integer1 * integer2);
	printf("The difference is %d\n", integer1 - integer2);
	printf("The quotient is %d\n", integer1 / integer2);
	printf("The remainder is %d\n", integer1 % integer2);

	return 0;
}
