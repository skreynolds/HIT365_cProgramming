/* Question2.c
 * Created on: 18/03/2014
 * Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int num, i, j;

	for (i = 1; i <= 5; ++i){

		printf("Enter a number:\n");
		scanf("%d", &num);

		for (j = 1; j <= num; ++j){
			printf("*");
		}
		printf("\n");
	}

	return 0;

}


