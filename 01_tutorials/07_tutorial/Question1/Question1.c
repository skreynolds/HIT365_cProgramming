/*
 * Question1.c
 * Created on: 22/05/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	int value1 = 200000, value2;

	/* Part a) */
	int *lPtr;

	/* Part b) */
	lPtr = &value1;

	/* Part c) */
	value2 = *lPtr;

	/* Part d) */
	printf("%d\n\n", value2);

	/* Part e) */
	printf("%p\n\n", &value1);

	/* Part f) */
	printf("%p\n\n", &value2);

	/* Part g) */
	printf("%p\n\n", &lPtr);

	return 0;
}


