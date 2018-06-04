/*
 * TestCode2.c
 * Created on: 24/05/2014
 * Author: Shane
 */

#include <stdio.h>

int main(void){

	char palindrome[] = "ABCCBA";

	int i = 0;
	int j = sizeof(palindrome)/sizeof(palindrome[0]) - 2;

	int sentinal = 1;

	while(palindrome[i] != '\0'){

		if (palindrome[i] != palindrome[j]){
			sentinal = 0;
			break;
		}
		i++;
		j--;
	}

	if(sentinal == 1){
		printf("Motherfuckin' palindrome, bitch!");
	} else {
		printf("Bitch you trippin', this ain't no palindrome!");
	}

	return 0;

}


