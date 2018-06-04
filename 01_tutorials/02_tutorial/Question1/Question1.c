/* Question1
 * Created on: 16/03/2014
 * Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	/* Initialise variable to hold user input */
	float sales;

	/* Create infinite loop with break condition */
	while(1){

		/* Prompt user to enter salary details */
		printf("Enter sales in dollars (-1 to end): \n");
		/* Grab user input */
		scanf("%f", &sales);

		/* Check if break condition is satisfied */
		if(sales == -1){
			break;
		}

		/* Print salary details for given input */
		printf("Salary is: $%.2f\n", 200 + .09*sales);
	}

	return 0;

}


