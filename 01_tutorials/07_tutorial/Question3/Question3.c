/*
 * Question3.c
 * Created on: 22/05/2014
 * Author: Shane
 */

#include <stdio.h>

void mystery1(char *s1, const char *s2);

int main(void){

	char str1[] = "Black";

	const char str2[] = "White";

	mystery1(str1, str2);

	printf("%s", str1);

	return 0;
}

void mystery1(char *s1, const char *s2){
	while(*s1 != '\0'){
		s1++;
	}

	for(; (*s1=*s2); s1++,s2++){
		;
	}



}
