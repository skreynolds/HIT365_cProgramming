/*
 * TestCode6.c
 * Created on: 15/06/2014
 * Author: Shane
 */

#include <stdio.h>
#define SIZE 10

void mystery(const int b[], int startIndex, int size);

int main(void){

	int a[SIZE] = {8, 3, 1, 2, 6, 0, 9, 7, 4, 5};
	printf("The answer is:\n");
	mystery(a, 0, SIZE);
	printf("\n");
	return 0;
}

void mystery(const int b[], int startIndex, int size){
	if (startIndex < size){
		mystery(b, startIndex + 1, size);
		printf("%d", b[startIndex]);
	}
}

