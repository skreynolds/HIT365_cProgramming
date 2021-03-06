/*
 * T4Q4.c
 * Created on: 15/06/2014
 * Author: Shane
 */

#include <stdio.h>

double celsius(double fahrenheit);
double fahrenheit(double celsius);

int main(void){

	int i;
	double cel = 0, fah = 32;

	printf("%15s%15s%15s%15s\n","Celsius", "Fahrenheit", "Fahrenheit", "Celsius");

	for (i = 0; i <= 100; i++){
		printf("%15.2f%15.2f%15.2f%15.2f\n", cel, fahrenheit(cel), fah, celsius(fah));

		cel += 1.00;
		fah += 1.80;

	}

	return 0;
}

double celsius(double fahrenheit){

	return (fahrenheit - 32) * 5 / 9;
}

double fahrenheit(double celsius){

	return celsius * 9 / 5 + 32;
}
