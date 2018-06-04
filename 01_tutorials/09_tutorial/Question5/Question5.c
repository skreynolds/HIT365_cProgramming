/*
 * Question5.c
 * Created on: 24/05/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	int mirrors[4] = {0, 2, 1, 3};
	int i;

	for (i = 0; i < 4; i++){
		if (mirrors[i] == i){
			printf("%d\n",mirrors[i]);
		}
	}
	return 0;
}


