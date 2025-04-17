/*Kaylynn Trevillion
COSC 1336 002
10/17/2023
Purpose: To determine the cost of copies for a copy center (Lab4L1)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PRICE_UNDER_100 .05
#define PRICE_OVER_100 .03

//function prototypes
int getNumCopies();

void main() {
	int numCopies = getNumCopies();
	double price;
	if (numCopies <= 100)
		price = numCopies * PRICE_UNDER_100;
	else
		price = (100 * PRICE_UNDER_100) + (numCopies - 100) * PRICE_OVER_100;
	printf("Your total number of copies is %d.\n", numCopies);
	printf("Your total cost is $%.2f.\n\n", price);
}

int getNumCopies() {
	int homeyDaClown;
	printf("Please enter the number of copies you wish to make: ");
	scanf("%d",&homeyDaClown);
	return homeyDaClown;
}

