/*
 * T2Q3.c
 * Created on: 14/06/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	int number, temp, d1, d2, d4, d5;

	printf("Enter a 5 digit number: ");
	scanf("%d", &number);

	temp = number;

	d1 = temp / 10000;
	temp = number % 10000;

	d2 = temp / 1000;
	temp = number % 100;

	d4 = temp / 10;

	d5 = number % 10;

	if (d1 == d5 && d2 == d4){
		printf("\nPalindrome.");
	}else{
		printf("\nNot Palindrome.\n");
	}

	return 0;

}


