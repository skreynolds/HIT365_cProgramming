/*
 * DynamicQuestion2.c
 * Created on: 17/04/2014
 * Author: Shane
 */

/* Preprocessing directives */
#include <stdio.h>
#include <stdlib.h>


/* Function prototypes */
void printMat(int **array, int nrow, int ncol);
int **removeEdge(int **array, int nrow, int ncol, int v1, int v2);
void test(int **array, int nrow, int ncol);


int main(void){

	/****************************************************************/

	/* This and the real results in the test code are the only
	 * parts of the code that need changing - everything else is
	 * dynamically allocated */

	int data[6][6] = 	{	{0,1,1,0,1,1},
							{1,0,1,1,1,0},
							{1,1,0,1,1,0},
							{0,1,1,0,1,1},
							{1,1,1,1,0,1},
							{1,0,0,1,1,0}	};

	/****************************************************************/

	/* Variables for main function specified  */
	int **graphOld;
	int i,j;
	int vertex1, vertex2;
	int nrow = sizeof(data) / sizeof(data[0]);
	int ncol = nrow;

	/* Dynamically allocated memory to store the existing adjacency matrix.
	 * This data structure is a array of pointers which make up the rows.
	 * Each pointer in the array of pointers each point to an array of
	 * pointers which makes up the dynamic 2D array  */
	graphOld = calloc(nrow, sizeof(int*));

	for (i = 0; i < nrow; i++){
		graphOld[i] = calloc(ncol, sizeof(int));
	}

	/* Populate our dynamically allocated 2D array with the actual
	 * adjacency matrix */
	for (i = 0; i < nrow; i++){
		for (j = 0; j < ncol; j++){
			graphOld[i][j] = data[i][j];
		}
	}

	/* Print the original adjacency matrix */
	printf("\nOriginal adjacency matrix:\n\n");
	printMat(graphOld, nrow, ncol);

	/* The edge to be contracted can be thought of as two vertices -
	 * that is the edge can be defined by two vertices. This code
	 * prompts the user for the two vertices which make up the
	 * edge they want to contract */
	printf("Enter the number of the first vertex of the edge: ");
	scanf("%d", &vertex1);
	printf("Enter the number of the second vertex of the edge: ");
	scanf("%d", &vertex2);

	printf("\n");

	/* Call to the function which contracts the graph. The result is
	 * returned to an pointer which is initialised in the line */
	int **graphPtr = removeEdge(graphOld, nrow, ncol, vertex1, vertex2);

	/* Print the contracted graph */
	printf("Contracted adjacency matrix:\n\n");
	printMat(graphPtr, nrow-1, ncol-1);

	/* A test function to ensure that the correct results are
	 * achieved */
	test(graphPtr, nrow, ncol);

	return 0;
}

/* This function receives a dynamically allocated 2D array and
 * prints it */
void printMat(int **array, int nrow, int ncol){
	int i, j;

	for (i = 0; i < nrow; i++){
		for (j = 0; j < ncol; j++){
			printf("%d ", array[i][j]);
		}
		printf("\n\n");
	}

}

/* This function receives a 2D array as input, along with the two
 * vertices that need to be contracted to one. It outputs a pointer
 * to an array. */
int **removeEdge(int **array, int nrow, int ncol, int v1, int v2){

	/* specify and initialise variables */
	int **graphNew;
	int i, j;
	int m = 0;
	int n = 0;

	/* Create a place in the heap memory (initialised with zeros)
	 * for the contracted graph to be stored */
	graphNew = calloc(nrow-1, sizeof(int*));

	for (i = 0; i < nrow-1; i++){
		graphNew[i] = calloc(ncol-1, sizeof(int));
	}

	/* This piece of code takes the columns which aren't the contracting vertexes
	 * and shifts them to the left and takes the rows which aren't the
	 * contracting vertexes and shifts them up NOTE: there will be
	 * a final row and final column which represents the contracted vertex. */
	for (i = 0; i < nrow; i++){
		n = 0;
		if (i != (v1-1) && i != (v2-1)){
			for (j = 0; j < ncol; j++){
				if (j != (v1-1) && j != (v2-1)){
					graphNew[m][n] = array[i][j];
					n += 1;
				}
			}
			m += 1;
		}
	}

	/* This code completes the contracted vertex on the final row and column
	 * NOTE: this only works for undirected graphs - it takes advantage of the
	 * symmetry in the adjacency matrix to complete the contracted adjacency
	 * matrix. */
	m = 0;

	for (j = 0; j < ncol; j++){
		if (j != (v1-1) && j != (v2-1)){
			if (array[v1-1][j] == 1 || array[v2-1][j] == 1){
				graphNew[nrow-2][m] = 1;
				graphNew[m][ncol-2] = 1;
			}
			m += 1;
		}
	}

	/* Finally the contracted vertex cannot access itself */
	graphNew[nrow-2][ncol-2] = 0;

	return graphNew;

}

/* Basic test which ensures that the results from the code are
 * correct */
void test(int **array, int nrow, int ncol){

	/***************************************************************/
	/* User needs to put the actual results in to a 2D array
	 * for the test function to accurately test the output of
	 * the removeEdge() function */

	int data[5][5] = {	{0,1,1,1,1},
						{1,0,1,0,1},
						{1,1,0,1,1},
						{1,0,1,0,1},
						{1,1,1,1,0}	};

	/**************************************************************/

	int i,j;
	int pass = 1;

	for (i = 0; i < (nrow-2); i++){
		for (j = 0; j < (ncol-2); j++){
			if (array[i][j] != data[i][j]){
				pass = 0;
				break;
			}
		}
	}

	if (pass == 1){
		printf("Test passed.\n");
	} else {
		printf("Test failed.\n");
	}
}
