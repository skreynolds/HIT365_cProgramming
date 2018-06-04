/*
 * Question2.c
 * Created on: 24/05/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	int oldList[5] = {1, 3, 5, 7, 9};
	int newList[5] = {0, 0, 0, 0, 0};
	int indexes[2] = {1, 4};
	int i, num;

	for (i = 0; i < 5; i++){
		printf("%d ", oldList[i]);
	}

	printf("\n");

	for (i = 0; i < 5; i++){
		printf("%d ", newList[i]);
	}

	return 0;

}


