/*Kaylynn Trevillion
 COCS 1336 002
 9/25/2023
 Purpose: To convert meters to inches. (Program 2)*/

#define _CRT_SECURE_NO_WARNINGS
#define METERS_TO_INCHES 39.3701
#include <stdio.h>

int main() {

	int meters;
	double inches;

	//Prompt with “Please enter your meters as a whole number here: “ .
	printf("Please enter your meters as a whole number here: ");
	//Read meters.
	scanf("%d", &meters);
	//Compute inches = meters * METERS_TO_INCHES
	inches = meters * METERS_TO_INCHES;
	//Output “Your meters are : “ + meters.
	printf("Your meters are: %d \n", meters);
	//Output “Your inches are : “ + inches.
	printf("Your inches are: %.2f \n", inches );

	return 0;
}