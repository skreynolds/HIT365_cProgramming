/*
 * T1Q2.c
 * Created on: 14/06/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	int a, b;

	printf("Enter two numbers:\n");
	scanf("%d%d", &a, &b);

	if (a > b){
		printf("%d is the largest\n", a);
	}

	if (a < b){
		printf("%d is the largest\n", b);
	}

	if (a == b){
		printf("These numbers are equal\n");
	}

	return 0;

}
