/*
 * Question3.c
 * Created on: 24/05/2014
 * Author: Shane
 */

#define LEN 5
#include <stdio.h>

int main(void){

	int condition = 1;
	int index;
	int numbers[LEN] = {1, 2, 3, 4, 5};

	for (index = 0; index < LEN-1; index++){

		if (numbers[index] > numbers[index + 1]){
			condition = 0;
		}

	}

	return 0;

}


