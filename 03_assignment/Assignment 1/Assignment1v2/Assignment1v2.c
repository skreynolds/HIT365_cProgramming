/*
 * Assignment1v2.c
 * Created on: 10/04/2014
 * Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>

int getEdges(int matrix[][7]);

int main(void){

	int graph[][7] = { 	{0,3,2,0,0,0,0},
						{0,0,0,0,1,2,0},
						{0,0,0,2,0,4,0},
						{0,0,0,0,0,1,0},
						{0,0,0,0,0,0,3},
						{0,0,0,0,0,0,2},
						{0,0,0,0,0,0,0}	};
	getEdges(graph);

	return 0;

}

int getEdges(int matrix[][]){

	int k = sizeof(matrix) / sizeof(matrix[0]);

	int edgeCounter = 0;
		int degreeCounter;
		int i, j;

		/* Prints the headers for the degrees for each node table */
		printf("\n\n%s%7s\n\n", "Node", "Degree");

		/* The code iterates through the rows of the graph matrix */
		for (i = 0; i <= k-1; i++){

			/* The node degree is set to zero for each new node */
			degreeCounter = 0;

			/* The code, for a given row, iterates through the columns */
			for (j = i; j <= k-1; j++){

				/* This piece of code tests to see if there is a non-zero entry in the graph matrix
				 * for the [ij]th entry to the graph matrix. If there is, then it counts this as an edge */
				if (matrix[i][j] != 0){
					edgeCounter += 1; /* Edge counter is increase by one if edge present */
					degreeCounter += 1; /* Degree counter is increased by one */
				}
			}

			/* Prints information on the number of degrees for each node */
			printf("V%d%7d\n", i, degreeCounter);
		}

		/* Prints information on the  */
		printf("\nThe number of edges in your matrix are: %d\n", edgeCounter);

		return 0;

}
