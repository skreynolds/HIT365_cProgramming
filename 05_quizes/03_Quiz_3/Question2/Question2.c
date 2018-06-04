/*
 * Question2.c
 * Created on: 16/05/2014
 * Author: Shane
 */

#include <stdio.h>

void swapArray(int array[2]);

int main(void){

	/* Initialise the array pair */
	int pair[2] = {12, 16};

	/* Print off the initial values in array */
	printf("%d%7d\n", pair[0], pair[1]);

	/* Test to see if the first element of the array is more than the second */
	if (pair[0] > pair[1]){
		/* If so, then call the swap function */
		swapArray(pair);
		/* Print the swappped array */
		printf("%d%7d\n", pair[0], pair[1]);
	}else{
		printf("The array doesn't need to be changed.");
	}

	return 0;
}

void swapArray(int array[2]){

	/* Temporarily store the first element of the array */
	int temp = array[0];

	/* Reassign the array elements */
	array[0] = array[1];
	array[1] = temp;
}
