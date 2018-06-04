/*
 * Question5.c
 * Created on: 18/04/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	int a = 1, b = 2, c = 4;

	if (a > b) {
		if (b > c) {
			printf("%d\n", c);
		} else {
			printf("%d\n", b);
		}

	} else if (a > c) {
		printf("%d\n", c);
	} else {
		printf("%d\n", a);
	}

	return 0;
}


