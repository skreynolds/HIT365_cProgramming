/*
 * Question4.c
 * Created on: 16/05/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	int mirrors[4] = {0, 2, 1, 3};
	int i;

	/* Dynamically determine the size of the mirrors array */
	int n = sizeof(mirrors)/sizeof(mirrors[0]);

	for (i = 0; i < n; i++){

		/* Test each element to see if it is the same as its index */
		if (mirrors[i] == i){
			/* Print array element if true */
			printf("%d\n", mirrors[i]);
		}
	}

	return 0;

}
