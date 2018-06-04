/*
 * Question5.c
 * Created on: 16/05/2014
 * Author: Shane
 */

#include <stdio.h>
#define NLEN 5

int main(void){

	int index;
	int nums[33] = {-1, 2, -3 , -4, 10};

	for (index = 0; index < NLEN; index++){
	        if (nums[index] > 0) {
	            printf("%d\n", index);
	        }
	}

	return 0;

}
