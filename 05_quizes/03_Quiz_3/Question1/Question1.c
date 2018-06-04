/*
 * Question1.c
 *  Created on: 16/05/2014
 *  Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int *ptr1, int *ptr2, int *ptr3);

int main(void){

	int rock = 1, paper = 2, scissors = 3;
	int *rockPtr, *paperPtr, *scissorsPtr;

	rockPtr = &rock;
	paperPtr = &paper;
	scissorsPtr = &scissors;

	printf("%d\n", *rockPtr);
	printf("%p\n\n", &rockPtr);
	printf("%d\n", *paperPtr);
	printf("%p\n\n", &paperPtr);
	printf("%d\n", *scissorsPtr);
	printf("%p\n\n", &scissorsPtr);

	swap(rockPtr, paperPtr, scissorsPtr);

	printf("%d\n", *rockPtr);
	printf("%p\n\n", &rockPtr);
	printf("%d\n", *paperPtr);
	printf("%p\n\n", &paperPtr);
	printf("%d\n", *scissorsPtr);
	printf("%p\n\n", &scissorsPtr);

	return 0;
}

void swap(int *ptr1, int *ptr2, int *ptr3){

	/* Store variable 1 address in temp1 */
	int temp1 = *ptr1;
	/* The object pointed to by ptr1 is assigned the value pointed to by ptr2 */
	*ptr1 = *ptr2;
	/* Store variable 2 in temp2 */
	int temp2 = *ptr3;
	/* The object pointed to by ptr3 is assigned the temp1 variable */
	*ptr3 = temp1;
	/* The object pointed to by ptr2 is assigned the temp2 variable */
	*ptr2 = temp2;

}


