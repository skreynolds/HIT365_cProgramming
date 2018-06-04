/*
 * Question3a.c
 * Created on: 04/04/2014
 * Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>

int factorialRecursive(int n);
int factorialIterative(int m);

/* The test function which will test both the iterative and recursive factorial
 * functions are included in the main function */

int main(void){

	int answer1, answer2, k, j;

	k = 5;
	j = 5;

	/* Makes a call to the recursive factorial function and prints the answer */
	answer1 = factorialRecursive(k);
	printf("The answer for the recursive factorial function is %d\n", answer1);

	/* Makes a call to the iterative factorial function and prints the answer */
	answer2 = factorialIterative(j);
	printf("The answer for the iterative factorial function is %d\n", answer2);

	/* Return statement indicating the program ended successfully */
	return 0;
}

/* Recursive factorial function - a function which places a call to itself */
int factorialRecursive(int n){

	if(n == 0 || n == 1){

		return 1;

	} else {

		/* Principal recursive element where function calls itself */
		return n*factorialRecursive(n-1);

	}

} /* End of Recursive factorial function */

/* Iterative factorial function with function input an integer */
int factorialIterative(int m){

	/* To cater for the cases where function input is 0 or 1 */
	if(m == 0 || m == 1){
		return 1;
	}

	int i;

	int fact = 1;

	/* For loop caters for all other cases by iteratively multiplying successive iterations */
	for(i = 1; i <= m; i++){

		fact *= i;

	}

	return fact;

} /* End of Iterative factorial function */


