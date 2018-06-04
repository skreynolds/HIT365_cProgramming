/*
 * T5Q1.c
 * Created on: 15/06/2014
 * Author: Shane
 */

#include <stdio.h>

int qualityPoints(double mark);

int main(void){

	int i;
	double aveMark;

	for (i = 0; i < 5; i++){
		printf("Enter student average mark: ");
		scanf("%lf", &aveMark);

		printf("%.2f on a 4 point scale is %d\n", aveMark, qualityPoints(aveMark));

	}

	return 0;

}

int qualityPoints(double mark){

	if (mark >= 90){
		return 4;
	} else if (mark < 90 && mark >= 80) {
		return 3;
	} else if (mark < 80 && mark >= 70) {
		return 2;
	} else if (mark < 70 && mark >= 60) {
		return 1;
	} else {
		return 0;
	}

}
