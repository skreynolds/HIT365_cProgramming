/*
 * T4Q2.c
 * Created on: 14/06/2014
 * Author: Shane
 */

#include <stdio.h>

int calculateCharges(int hours);

int main(void){

	int i, temp, parkingHours[3];
	float total = 0.0;
	float charge[3];

	for (i = 0; i < 3; i++){

		printf("Enter how long the customer was parked for: ");
		scanf("%d", &temp);
		parkingHours[i] = temp;
		charge[i] = calculateCharges(parkingHours[i]);

	}

	printf("Parking hours    Charge");

	for (i = 0; i < 3; i++){
		total += charge[i];
		printf("\n%d%20.2f", parkingHours[i], charge[i]);
	}

	printf("\nTotal %16.2f", total);

	return 0;

}

int calculateCharges(int hours){

	if (hours <= 3){
		return 2.00;
	}else{
		if (hours > 19){
			return 10.00;
		}
		return 2 + .5*hours;
	}
}
