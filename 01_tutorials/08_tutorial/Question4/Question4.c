/*
 * Question4.c
 * Created on: 24/05/2014
 * Author: Shane
 */


#include <stdio.h>

int main(void){

	int size = 10;
	int i, count;

/*
	for (count = 0; count < size; count++){

		for (i = 0; i < count; i++){

			printf(" ");

		}

		for (i = 0; i < size - count; i++){

			printf("*");

		}

		printf("\n");

	}
*/

	for (count = size-1; count >= 0; count--){

			for (i = 0; i < count; i++){

				printf(" ");

			}

			for (i = 0; i < size - count; i++){

				printf("*");

			}

			printf("\n");

		}


	return 0;

}
