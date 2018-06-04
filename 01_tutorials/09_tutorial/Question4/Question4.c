/*
 * Question4.c
 * Created on: 24/05/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	int rock = 5;
	int paper = 10;
	int scissors = 15;

	printf("%d%7d%7d\n\n", rock, paper, scissors);

	int temp1;

	temp1 = rock;
	rock = paper;
	paper = scissors;
	scissors = temp1;

	printf("%d%7d%7d\n\n", rock, paper, scissors);

}


