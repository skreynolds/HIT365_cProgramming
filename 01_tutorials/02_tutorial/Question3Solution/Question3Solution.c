/*
 * Question3Solution.c
 * Created on: 24/03/2014
 * Author: Shane
 */

#include <stdio.h>
#include<stdlib.h>

int main(void){

	int number, temp, firstDigit, secondDigit, fourthDigit, fifthDigit;

	printf("Enter a five-digit number: ");
	scanf("%d", &number);

	temp = number;

	firstDigit = temp / 10000;
	temp = number % 10000;

	secondDigit = temp / 1000;
	temp = number % 100;

	fourthDigit = temp / 10;

	fifthDigit = number % 10;

	if(firstDigit == fifthDigit && secondDigit == fourthDigit){
		printf("Palindrome");
	} else {
		printf("Not Palindrome");
	}

	return 0;

}


