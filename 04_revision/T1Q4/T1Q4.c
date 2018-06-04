/*
 * T1Q4.c
 * Created on: 14/06/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	float height, weight, BMI;

	printf("User to enter height:\n");
	scanf("%f", &height);

	printf("User to enter weight:\n");
	scanf("%f", &weight);

	BMI = weight / (height*height);

	printf("Users BMI is: %.2f\n\n", BMI);
	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal: between 18.5 and 24.9\n");
	printf("Overweight: between 25 and 29.9\n");
	printf("Obese: 30 or greater\n");

	return 0;
}
