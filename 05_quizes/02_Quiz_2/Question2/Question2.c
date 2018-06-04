/*
 * Question2.c
 * Created on: 18/04/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	int i;
	char fantasy[] = "The cat sat on the mat.";

	/* Answer to part a */
	printf("%c\n\n", fantasy[0]);

	/* Answer to part b */
	printf("%c\n\n", fantasy[sizeof(fantasy)-2]);

	/* Print all of the string */
	for (i = 0; i < sizeof(fantasy); i++){
		printf("%c", fantasy[i]);
	}

	printf("\n\n");

	/* The example given in the quiz */
	for (i = 0; i < sizeof(fantasy); i++){
		if (i > 0) {
			printf("%c",fantasy[i - 1]);
		} else {
			printf("Nothing to the left.\n\n");
		}
	}

	printf("\n\n");

	/* Answer to part c */
	for (i = 0; i < sizeof(fantasy); i++){
		if ( i < (sizeof(fantasy)-1) ){
			printf("%c", fantasy[i+1]);
		} else {
			printf("\n\nNothing to the right.");
		}
	}

	printf("\n\n");

	/* Answer to part d */
	for (i = 0; i < sizeof(fantasy); i++){

		if ( i < (sizeof(fantasy)-1) ){

			if(fantasy[i] > fantasy[i+1]){
				printf("%c", fantasy[i]);
			} else {
				printf("%c", fantasy[i+1]);
			}

		} else {

			printf("\n\nNothing to the right.");

		}
	}

	printf("\n\n");

	return 0;
}


