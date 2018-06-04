/*
 * Question3.c
 * Created on: 24/05/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	int numbers[5] = {6, 7, 8, 9, 10};
	int i;

	for (i = 0; i < 5; i++){

		numbers[i] = i;
		printf("%d\n", numbers[i]);
	}

	return 0;

}


