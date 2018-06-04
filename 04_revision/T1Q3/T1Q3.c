/*
 * T1Q3.c
 * Created on: 14/06/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	float a,b,c;

	printf("Input three numbers:\n");

	scanf("%f%f%f", &a, &b, &c);

	printf("Sum is %.0f\n", a+b+c);

	printf("Average is %.2f\n", (a+b+c) / 3);

	printf("Product is %.0f\n", a*b*c);

	if (a>b){
		if (a>c){
			printf(".0%f is the largest\n", a);
		}else{
			printf(".0%f is the largest\n", c);
		}
	}else{
		if (b>c){
			printf("%.0f is the largest\n", b);
		}
	}

	if (a<b){
		if (a<c){
			printf("%.0f is the smallest\n", a);
		}else{
			printf("%.0f is the smallest\n", c);
		}
	}else{
		if (b<c){
			printf("%.0f is the smallest\n", b);
		}
	}

	return 0;
}
