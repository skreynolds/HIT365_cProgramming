/*
 * Question3.c
 * Created on: 16/05/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){
	int oldList[5] = {1, 4, 5, 7, 9};
	int newList[5] = {0, 0, 0, 0, 0};
	int i, n = sizeof(oldList)/sizeof(oldList[0]);

	printf("%d\n\n", sizeof(oldList));

	/* Copy the old list into the new list */
	for (i = 0; i < n; i++){
		newList[i] = oldList[i];
	}

	for (i = 0; i < n; i++){

		/* Print the new list to check that it has done the job */
		printf("%d ", newList[i]);
	}

	return 0;
}
