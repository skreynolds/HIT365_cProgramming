/*
 * Question 1.c
 * Created on: 24/05/2014
 * Author: Shane
 */

#define LEN 4
#include <stdio.h>

int duplicate(int array[LEN][LEN]);
void testFunc(int singleValue);


int main(void){

	int matrix[LEN][LEN] = {{1, 1, 1, 1},
							{1, 1, 0, 0},
							{1, 0, 1, 0},
							{1, 0, 0, 1}};

	int sentinel = duplicate(matrix);

	if (sentinel == 0){
		printf("Error: an edge was recorded twice.\n\n");
	}

	/* Run test function */
	testFunc(sentinel);

	return 0;
}

int duplicate(int array[LEN][LEN]){
	int sentinel = 1;
	int i, j;

	/* First for loop iterates through the rows */
	for (i = 0; i < 4; i++){
			/* Second for loop iterates through the columns */
			for (j = i; j < 4; j++){
				/* If statement checks for duplication */
				/* Duplication checking doesn't occur */
				if ((array[i][j] == 1) &&
						(i != j) &&
							(array[i][j] == array[j][i]) 	){

					printf("Duplication with edges: %d-%d and %d-%d\n", i,j,j,i);
					sentinel = 0;

				}

			}

	}
	printf("\n");
	/* Sentinel is returned in case an indicator is needed for duplication
	 * in the matrix when we return to the main function */
	return sentinel;

}

void testFunc(int singleValue){

	/********************************************
	 * So the matrix being tested is
	 *
	 *  1 1 1 0
	 *  1 1 0 0
	 *  1 0 1 0
	 *  1 0 0 1
	 *
	 *  This matrix has duplicates
	 *	Duplicates = 0
	 *	No Duplictes = 1
	 ********************************************/

	if (singleValue == 0){
		printf("Pass\n");
	} else {
		printf("Fail\n");
	}

}
