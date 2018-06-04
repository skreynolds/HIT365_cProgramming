/*
 * TestCode4.c
 * Created on: 27/05/2014
 * Author: Shane
 */

#include <stdio.h>

void main(){

   int c, j, a, b, n, x[10];
   char u;

   printf("Enter the number of values being entered\n");

   scanf("%d", &n);

   printf("Enter the values \n");

   for (c = 0; c < n; ++c){
	   scanf("%d", &x[c]);
   }

   for (c = n; c >=0; --c){

	   for (j = c + 1; j < n; ++j){

		   if (x[c] > x[j]){

			   a =  x[c];
			   x[c] = x[j];
			   x[j] = a;

		   }

	   }

   }

   printf("The numbers arranged in ascending order are given below \n");

   for (c = 0; c < n; ++c){
	   printf("%d\n", x[c]);
   }

   printf("User Choice: I for insertion or Q for quit\n");

   scanf("%c", &u);
   printf("**");
   scanf("%c", &u);

   if (u=='i'){

	   n = n+1;

	   printf("Enter the number for insertion \n");

	   scanf("%d", &b);

	   x[n]=b;

	   for (c = n; c >=0; --c){

		   for (j = c + 1; j < n; ++j){

			   if (x[c] > x[j]){

				   a =  x[c];
				   x[c] = x[j];
				   x[j] = a;

			   }

		   }

	   }
}

}


