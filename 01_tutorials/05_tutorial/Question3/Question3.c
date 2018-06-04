/*
 * Question3.c
 * Created on: 06/04/2014
 * Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int guessNum(int guess, int actual);
void game(void);

int main(void){

	game();

	return 0;
}

void game(void){

	int randNum, guess;
	int sentinal = 0;
	char playResponse;

	/* Generate random number */
	randNum = 1 + (rand() % 1000);

	/* Play the game until you get the number right */
	while (sentinal == 0){

		printf("Try to guess the number.\n");
		scanf("%d", &guess);
		sentinal = guessNum(guess, randNum);
	}

	printf("Excellent! You guessed the motherfucking number, bitch!\n\n"
				"Would you like to play again (y or no)?\n");
	scanf("%s", &playResponse);

	if (playResponse == 1){
		game();
	} else {
		return;
	}

}

int guessNum(int guess, int actual){

	if (guess == actual){

		return 1;

	} else {

		if (guess < actual){
			printf("Too low. Try again.\n");
		} else {
			printf("Too high. Try again.\n");
		}

		return 0;
	}

}
