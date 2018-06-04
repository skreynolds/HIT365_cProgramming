/* Question3.c
 * Created on: 16/03/2014
 * Author: Shane
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int i, n1, n2, n4, n5;

	printf("Enter a 5 digit number: \n");
	scanf("%d\n", &i);

	n1 = i % 10;

	i = i / 10;
	n2 = i % 10;

	i = i /10;

	i = i / 10;
	n4 = i % 10;

	i = i / 10;
	n5 = i % 10;

	if(n1 == n5 && n2 == n4){

		printf("Palindrome\n");

	} else {

		printf("Not Palindrome\n");

	}

	return 0;

}
