/*
 * T8Q3.c
 * Created on: 15/06/2014
 * Author: Shane
 */

#include <stdio.h>
#define LEN 5

int main(void){

	int numbers[LEN] = {1, 2, 3, 4, 5};
	int logical = 1;
	int i;

	for (i = 0; i < LEN - 1; i++){

		if (numbers[i] > numbers[i+1]){
			logical = 0;
		}

	}

	printf("%d", logical);
	return 0;

}
