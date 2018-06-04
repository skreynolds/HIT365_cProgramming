/*
 * Question1a.c
 * Created on: 18/04/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	float a = 2.0;
	float *realPtr = &a;
	printf("%p\n", &realPtr);
	printf("%f\n\n", *realPtr);

	float *intPtr = realPtr;
	printf("%p\n", &intPtr);
	printf("%f\n\n", *intPtr);

	return 0;

}


