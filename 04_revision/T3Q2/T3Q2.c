/*
 * T3Q2.c
 * Created on: 14/06/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	int i, j, n1, n2, n3, n4, n5;

	printf("Enter 5 numbers:");
	scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

	int array[5] = {n1, n2, n3, n4, n5};

	for (i = 0; i < 5; i++){
		for (j = 0; j < array[i]; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


