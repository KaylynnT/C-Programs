/*Kaylynn Trevillion
COSC 1336 002
09/19/2023
Purpose: To figure out how long it will take to 
mow a yard (Lab2L3)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	double yardLength, yardWidth, houseLength,
		houseWidth, rateOfMowing;
	//input
	printf("Please enter the width of your yard in feet: ");
	scanf("%lf", &yardWidth);
	printf("Please enter the length of your yard in feet: ");
	scanf("%lf", &yardLength); 
	printf("Please enter the width of your house in feet: ");
	scanf("%lf", &houseWidth);
	printf("Please enter the length of your house in feet: ");
	scanf("%lf", &houseLength);
	printf("Please enter the rate at which you mow in square ");
	printf("feet per minute: ");
	scanf("%lf", &rateOfMowing);
	//processing
	double rawAreaOfYard = yardLength * yardWidth;
	double areaOfHouse = houseLength * houseWidth; 
	double areaOfYard = rawAreaOfYard - areaOfHouse;
	double mowingTime = areaOfYard / rateOfMowing;
	//output
	printf("It will take %.2f minutes to mow your yard ", mowingTime);
	printf("of %.2f square feet.", areaOfYard);
}
