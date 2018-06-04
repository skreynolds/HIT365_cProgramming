/*
 * Question6.c
 * Created on: 24/05/2014
 * Author: Shane
 */

#define NLEN 5
#include <stdio.h>

int main(void){

	int nums[5] = {2, 5, -6, 7, 34};
	int index;

	for (index = 0; index < NLEN; index++){
		if (nums[index] > 0){
			printf("%d\n", nums[index]);
		}
	}

	printf("\n\n");

	for (index = 0; index < NLEN; index++){
			if (nums[index] > 0){
				printf("%d\n", index);
			}
		}

	return 0;

}


