/*
 * T8Q2.c
 * Created on: 15/06/2014
 * Author: Shane
 */

#include <stdio.h>
#define LEN 5

void printArray(int array[5]);

int main(void){

	int values[LEN] = {1, 2, 3, 4, 5};
	int temp = values[0];
	int index;

	printArray(values);

	for (index = 1; index <= LEN; index++){

		values[index - 1] = values[index];

	}

	values[LEN - 1] = temp;

	printf("\n");
	printArray(values);

	return 0;

}

void printArray(int array[LEN]){

	int i;

	for (i = 0; i < LEN; i++){
		printf("%d", array[i]);
	}
}
