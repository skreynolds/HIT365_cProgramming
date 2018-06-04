/*
 * Question2.c
 * Created on: 22/05/2014
 * Author: Shane
 */

#define LEN 5

#include <stdio.h>

int main(void){

/*	This is the example code:
 *
	int values[LEN] = {1, 2, 3, 4, 5};
	int temp = values[LEN - 1];
	int index;

	for (index = LEN-1; index > 0; index--){
		values[index] = values[index-1];
	}

	values[0] = temp;
*/

	int values[LEN] = {1, 2, 3, 4, 5};
	int temp = values[0];
	int index;

	printf("\n\n");

	for (index = 1; index < LEN; index++){
		values[index - 1] = values[index];
	}

	values[LEN-1] = temp;

	return 0;
}


