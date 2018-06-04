/*
 * T5Q3.c
 * Created on: 15/06/2014
 * Author: Shane
 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void game();

int main(void){

	srand(time(NULL));
	game();

	return 0;

}

void game(){

	char run = 'y';
	int guess;

	while (run == 'y'){

		int number = 1 + rand()%1000;
		printf("I have a number between 1 and 1000\n");
		printf("Can you guess my number?\n");
		printf("Please type your first guess\n");

		while (1){

			scanf("%d", &guess);

			if (guess == number){
				printf("Excellent! You guessed the number. ");
				break;
			} else if (guess > number){
				printf("Too high. Try again.\n");
			} else {
				printf("Too low. Try again.\n");
			}
		}
		printf("Would you like to play again? (y/n) ");
		run = getch();
	}

}
