/*
 * Question4.c
 * Created on: 25/03/2014
 * Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double celcius(double fahrenheit);
double fahrenheit(double celcius);

int main(void){

	double F, C;

	/* Prompt user for a fahrenheit temperature and print the celcius converted value */
	printf("Input a fahrenheit temperature\n");
	scanf("%lf", &F);
	printf("The fahrenheit temperature in celcius is %.2f\n", celcius(F));

	/* Prompt user for a celcius temperature and print the fahrenheit converted value */
	printf("Input a celcius temperature\n");
	scanf("%lf", &C);
	printf("The fahrenheit temperature in celcius is %.2f\n", fahrenheit(C));

	return 0;
}

/* Given a fahrenheit input, the function returns a the celcius equivalent */
double celcius(double fahrenheit){
	return ( (fahrenheit - 32) * 5 ) / 9;
}

/* Given a celcius input, the function returns a fahrenheit input */
double fahrenheit(double celcius){
	return (celcius * 9) / 5 + 32;
}



