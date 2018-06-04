/*
 * T7Q3.c
 * Created on: 15/06/2014
 * Author: Shane
 */

#include <stdio.h>

void mystery(char *s1, const char *s2);

int main(void){

	char string1[] = "dirt";
	char string2[] = "meat";

	mystery(string1, string2);

	printf("%s\n", string1);
	printf("%s\n", string2);

	return 0;
}

void mystery(char *s1, const char *s2){

	while (*s1 != '\0'){
		s1++;
	}

	for (;*s1=*s2; s1++, s2++){

	}

}
