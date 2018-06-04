/*
 * T7Q1.c
 * Created on: 15/06/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	int *lPtr;

	int value1 = 9, value2 = 5;

	lPtr = &value1;

	printf("Printing the value that the pointer points to: ");
	printf("%d\n", *lPtr);
	printf("Print the address that the pointer points to: ");
	printf("%p\n", lPtr);

	*lPtr = value2;
	printf("Print the value that the pointer has been changed to: ");
	printf("%d\n", *lPtr);

	printf("Print the address of value1: ");
	printf("%p\n", &value1);
	printf("Print the address of value2: ");
	printf("%p\n", &value2);

	lPtr = &value2;
	printf("Print the address that the pointer points to: ");
	printf("%p\n", lPtr);

	return 0;
}


