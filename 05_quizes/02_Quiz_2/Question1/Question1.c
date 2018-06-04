/*
 * Question1.c
 * Created on: 18/04/2014
 * Author: Shane
 */

#include <stdio.h>
#define ASIZE 7
/* Function prototype */
void printArray(int array[ASIZE]);

int main(void){

	/* Initialise variables */
	int temp;
	int marks[ASIZE] = {97, 65, 68, 73, 75, 83, 63};

	/* Print original array */
	printArray(marks);
	printf("\n\n");

	/* Swap variables using a temp storage variable */
	temp = marks[0]; /* Stores first element of array in temp */
	marks[0] = marks[6]; /* Assigns last element to first */
	marks[6] = temp; /* Put the first element in last */

	/* Prints the updated array */
	printArray(marks);
	printf("\n\n");

	return 0;
}

/* Function prints an array of static size ASIZE */
void printArray(int array[ASIZE]){

	int i;

	for(i = 0; i < ASIZE; i++){
			printf("%d ", array[i]);
		}

}
