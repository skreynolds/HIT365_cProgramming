/*
 * Question1.c
 * Created on: 06/04/2014
 * Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int qualityPoints(int average);

int main(void){

	int i, value;

	for(i = 0; i <= 5; i++){

		printf("Enter a student's average grade: \n");
		scanf("%d", &value);

		printf("The student's quality points are: %d \n", qualityPoints(value));

	}

	return 0;

}

int qualityPoints(int average){

	if (average >= 90 && average <= 100){
		return 4;
	}

	if (average >= 80 && average <= 89){
		return 3;
	}

	if (average >= 70 && average <= 79){
		return 2;
	}

	if (average >= 60 && average <= 69){
		return 1;
	} else {
		return 0;
	}

}

