/*
 * T10Q3.c
 * Created on: 15/06/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	int i;
	int numbers[5] = {9, 9, 9, 9, 9};
	for (i = 0; i < 5; i++){
		numbers[i] = i;
	}

	for (i = 0; i < 5; i++){
		printf("%d", numbers[i]);
	}
	return 0;
}


