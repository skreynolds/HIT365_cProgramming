/*
 * Question2.c
 * Created on: 16/04/2014
 * Author: Shane
 */

#include <stdio.h>
#define SIZE 6

void printMat(int matrix[][SIZE]);
void removeEdge(int matrix[][SIZE], int v1, int v2);
void test(int matrix[][SIZE]);

int main(void){

	int vertex1, vertex2;
	int mat[SIZE][SIZE] = {	{0,1,1,0,1,1},
							{1,0,1,1,1,0},
							{1,1,0,1,1,0},
							{0,1,1,0,1,1},
							{1,1,1,1,0,1},
							{1,0,0,1,1,0}	};

	printMat(mat);

	printf("Enter the number of the first vertex of the edge: ");
	scanf("%d", &vertex1);

	printf("Enter the number of the second vertex of the edge: ");
	scanf("%d", &vertex2);

	removeEdge(mat, vertex1, vertex2);

	printMat(mat);

	return 0;
}

void printMat(int matrix[][SIZE]){
	int i, j;
	for (i = 0; i < SIZE; i++){
		for (j = 0; j < SIZE; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n\n");
	}

}

void removeEdge(int matrix[][SIZE], int v1, int v2){

	int i;

	for (i = 0; i < SIZE; i++){

		if (matrix[(v1-1)][i] == 1 || matrix[(v2-1)][i] == 1){
			matrix[(v1-1)][i] = 1;
		}

	}

	for (i = 0; i < SIZE; i++){

		if (matrix[i][(v1-1)] == 1 || matrix[i][(v2-1)] == 1){
			matrix[i][(v1-1)] = 1;
		}
	}

	for (i = 0; i < SIZE; i++){
		matrix[(v2-1)][i] = 0;
		matrix[i][(v2-1)] = 0;
	}

	matrix[(v1-1)][(v1-1)] = 0;
}

void test(int matrix[][SIZE]){

	int actMat[SIZE][SIZE] = {	{},
								{},
								{},
								{},
								{},
								{}	}


}
