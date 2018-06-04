/*
 * Question1.c
 * Created on: 24/05/2014
 * Author: Shane
 */

#include <stdio.h>

/* Remember that the you can pass an array to a function, but you can't return one */
void swap(int array[2]);

int main(void){

	int pair[2] = {12, 6};

	if (pair[0] > pair[1]){
		swap(pair);
	}

	printf("%d%7d", pair[0], pair[1]);

	return 0;

}


/* The function performs operations on the pointers of the array */
void swap(int array[2]){

	int temp = array[0];

	array[0] = array[1];

	array[1] = temp;

}
