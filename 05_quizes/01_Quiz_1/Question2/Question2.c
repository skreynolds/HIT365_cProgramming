/*
 * 	Question2.c
 *  Created on: 04/04/2014
 *  Author: Shane
 */

# include<stdio.h>

int main(void){

	int i=1;
	int count=0;

	for(i=0;(count=i)<11;i++){
		printf("%s\n",count%2?"###":"xxx");
		count++;
	}

	return 0;

}



