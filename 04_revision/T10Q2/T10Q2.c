/*
 * T10Q2.c
 * Created on: 15/06/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	int oldList[] = {1, 3, 5, 7, 9};
	int newList[] = {0, 0, 0, 0, 0};
	int indexes[] = {1, 4};

	int num;

	for (num = 0; num < 2; num++){
		newList[indexes[num]] = oldList[indexes[num]];
	}

	for (num = 0; num < 5; num++){
		printf("%d ", newList[num]);
	}

	return 0;
}


