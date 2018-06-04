/*
 * TestCode5.c
 * Created on: 27/05/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	int i, j, num, max, temp, finalInput, array[10];

	char user;

	printf("Enter the number of entries in the array\n");
	scanf("%d", &num);

	for (i = 0; i < num; i++){
		scanf("%d", &array[i]);
	}

	/* Print the unsorted array */
	for (i = 0; i < num; i++){
		printf("%d ", array[i]);
	}

	printf("\n");

	/* Sort the array (zero isn't included because you can't
	 * compare one element to itself) */
	for (i = num-1; i >= 0; i--){

		/* Store the index of the of the element being analysed */
		max = i;

		/* Compare the current element to the rest of the array */
		for (j = 0; j < i; j++){

			/* Discard the currently stored index in favour of the greater */
			if (array[j] > array[max]){
				max = j;
			}

		}

		/* Perform the swap */
		temp = array[i];
		array[i] = array[max];
		array[max] = temp;

		/* Print the sorted array iteration */
		for (j = 0; j < num; j++){
			printf("%d ", array[j]);
		}
		printf("\n");
	}

	/* Print the sorted array */
	for (i = 0; i < num; i++){
		printf("%d ", array[i]);
	}

	/* Get user input */
	printf("Get user input\n");
	printf("\n");
	scanf("%c", &user);
	scanf("%c", &user);

	/* Check user input */
	if (user == 'i'){
		scanf("%d", &finalInput);

		array[num] = finalInput;
		num += 1;

		for (i = num-1; i >= 0; i--){

			/* Store the index of the of the element being analysed */
			max = i;

			/* Compare the current element to the rest of the array */
			for (j = 0; j < i; j++){

				/* Discard the currently stored index in favour of the greater */
				if (array[j] > array[max]){
					max = j;
				}

			}

			/* Perform the swap */
			temp = array[i];
			array[i] = array[max];
			array[max] = temp;

			/* Print the sorted array iteration */
			for (j = 0; j < num; j++){
				printf("%d ", array[j]);
			}
			printf("\n");
		}

	}

	return 0;

}


