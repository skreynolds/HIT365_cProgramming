/*
 * Question4.c
 * Created on: 18/04/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	int p = 4, q = 5, r = 3, s = 4;

	if (p < q){
		if (q > 4){
			s = 5;
		} else {
			s = 6;
		}
	}

	printf("%d", s);

	return 0;
}


