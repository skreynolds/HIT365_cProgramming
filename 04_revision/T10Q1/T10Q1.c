/*
 * T10Q1.c
 * Created on: 15/06/2014
 * Author: Shane
 */

#include <stdio.h>

void printArray(int array[2]);

int main(void){

	int pair[2] = {1, 2};

	printArray(pair);

	if (pair[0] > pair[1]){

		int temp = pair[0];
		pair[0] = pair[1];
		pair[1] = temp;
	}
	printf("\n");
	printArray(pair);
	return 0;

}

void printArray(int array[2]){
	int i;
	for (i = 0; i < 2; i++){
		printf("%d ", array[i]);
	}
}
