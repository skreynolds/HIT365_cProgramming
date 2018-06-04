/*
 * Question3.c
 * Created on: 25/03/2014
 * Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double hypotenuse(double a, double b);

/* Main function makes call to hypotenuse function */
int main(void){

	double A, B;

	printf("Enter the length of one side of a right angled triangle: \n");
	scanf("%lf", &A);

	printf("Enter the length of the other side of a right angled triangle: \n");
	scanf("%lf", &B);

	printf("The hypotenuse is of length %.2f", hypotenuse(A,B));

	return 0;
}

/* Hypotenuse function - finds the length of a hypotenuse given two side inputs */
double hypotenuse(double a, double b){

	/* Note: becareful with powers in C - you can't use the ^ symbol for some reason */
	return sqrt(a*a + b*b);

}


