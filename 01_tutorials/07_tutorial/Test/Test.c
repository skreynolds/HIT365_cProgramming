/*
 * Test.c
 * Created on: 22/05/2014
 * Author: Shane
 */

int main(void){

	char string1[] = "Black";
	int i;


	for(i = 0; i < 5; i++){
		printf("%c", string1[i]); /* what is this error? */
	}

	printf("\n"); /* What the fuck is the compiler complaining about? */

	printf("%s", string1);

	return 0;
}


