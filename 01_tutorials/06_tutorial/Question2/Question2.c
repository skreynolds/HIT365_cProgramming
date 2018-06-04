/*
 * Question2.c
 * Created on: 13/04/2014
 * Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/* Dice roll function prototype */
int diceRoll(void);

int main(void){

	int i, j, twoDiceRollValue;
	int frequency[11] = {0};

	/* This create a time varying seed for the random number generator */
	srand( time(NULL) );

	/* This obtains the frequency of the sum of two die thrown
	 * 36000 times */
	for (i = 0; i <= 36000; i++){
		twoDiceRollValue = diceRoll() + diceRoll();
		++frequency[ (twoDiceRollValue-2) ]; /* This is the important part */
	}

	/* Prints headers */
	printf("%s%13s%13s\n", "Die Sum", "Frequency", "Percentage");

	/* Prints the frequency lists and percentages */
	for (j = 0; j <= 10; j++){
		printf("%5d%10d%15.3f\n", j+2, frequency[j], (double) frequency[j] / 36000);
	}

	return 0;
}

/* Dice rolling function */
int diceRoll(void){
	return 1 + ( rand() % 6 );
}
