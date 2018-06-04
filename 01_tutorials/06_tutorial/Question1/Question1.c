/*
 * Question1.c
 * Created on: 13/04/2014
 * Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int salaries[11] = {0};
	int sales;
	double salary;
	double super = 0.09;

	printf("Enter employee gross sales (-1 to end): ");
	scanf("%d", &sales);

	while (sales != -1){

		salary = 200 + super * sales;
		printf("Employee salary is $%.2f\n", salary);

		if (salary >= 200 && salary < 1000){
			++salaries[ (int) salary / 100 ]; /* What does this line actually do? */
		} else if (salary >= 1000){
			++salaries[ 10 ];
		}

		printf("\nEnter employee grosss sales (-1 to end): ");
		scanf("%d", &sales);
	}

	printf("\nEmployees in the range: \n");
	printf("$200-$299 : %d\n", salaries[2]);
	printf("$300-$399 : %d\n", salaries[3]);
	printf("$400-$499 : %d\n", salaries[4]);
	printf("$500-$599 : %d\n", salaries[5]);
	printf("$600-$699 : %d\n", salaries[6]);
	printf("$700-$799 : %d\n", salaries[7]);
	printf("$800-$899 : %d\n", salaries[8]);
	printf("$900-$999 : %d\n", salaries[9]);
	printf("Over $1000 : %d\n", salaries[10]);

	return 0;

}


