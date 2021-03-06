/*
 * T5Q2.c
 * Created on: 15/06/2014
 * Author: Shane
 */

#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2);

int main(void){

	double x1, y1, x2, y2;

	printf("Enter two (x,y) points: ");
	scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
	printf("\nThe distance between the two points is %.2f\n", distance(x1, y1, x2, y2));

	return 0;
}

double distance(double x1, double y1, double x2, double y2){

	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


