/* Question2.c
 * Created on: 16/03/2014
 * Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	float principal, rate, term;

	while(1){

		/* Get principal from user */
		printf("Enter loan principal (-1 to end): \n");
		scanf("%f", &principal);

		/* Check to see if user wants to exit application */
		if(principal == -1){
					break;
				}

		/* Obtain loan rate from user */
		printf("Enter loan rate: \n");
		scanf("%f", &rate);

		/* Obtain the term of the loan from the user */
		printf("Enter loan term: \n");
		scanf("%f", &term);

		printf("The interest charge is $%.2f\n", principal*rate*term/365);
	}

	return 0;

}


