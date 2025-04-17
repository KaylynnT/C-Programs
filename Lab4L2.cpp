/*Kaylynn Trevillion
COSC 1336 002
10/17/2023
Purpose: Tp print out an appropriate slippery roads message (Lab4L2)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//function prototypes
void isSlippery();

void main() {
	char sForSlippery;
	printf("Please enter an 's' if the road is slippery: ");
	scanf(" %c", &sForSlippery);
	if (sForSlippery == 's' || sForSlippery == 'S')
		isSlippery();
	else
		printf("Road conditions normal. Drive like you just don't care!");
}
void isSlippery() {
	double temperature;
	printf("Please enter the temperature today in Fahrenheit: ");
	scanf("%lf", &temperature);
	if (temperature > 32)
		printf("Wet roads ahead. Stopping time doubled! So, hurry up!");
	else
		printf("Icy roads ahead. Go ahead and die!");
}
