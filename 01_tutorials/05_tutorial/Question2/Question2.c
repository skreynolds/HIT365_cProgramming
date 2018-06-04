/*
 * Question2.c
 * Created on: 06/04/2014
 * Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2);

int main(void){

	double X1, X2, Y1, Y2;

	printf("Enter a coordinate on the Cartesian plane: \n");
	scanf("%lf%lf", &X1, &Y1);
	printf("\n");

	printf("Enter a coordinate on the Cartesian plane: \n");
	scanf("%lf%lf", &X2, &Y2);
	printf("\n");

	printf("The distance between the two points you have entered is : %.2f\n\n", distance(X1,Y1,X2,Y2));

	return 0;
}

double distance(double x1, double y1, double x2, double y2){

	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

}
