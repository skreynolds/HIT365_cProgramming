/*
 * T1Q1.c
 * Created on: 14/06/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	int a, b;

	printf("Please enter two numbers:\n");

	scanf("%d%d", &a, &b);

	printf("The sums is %d\n", a+b);

	printf("The product is %d\n", a*b);

	printf("The difference is %d\n", a-b);

	printf("The quotient is %d\n", a/b);

	printf("The remainder is %d\n", a%b);

	return 0;
}


