/*Kaylynn Trevillion
COSC 1336 002
11/16/2023
Purpose: TO store and display sales figues for multiple months for
multiple employees (Lab7L4)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUM_SALESPEOPLE 4
#define MONTHS 3

//funtion prototypes
double getSales(double sales[NUM_SALESPEOPLE][MONTHS]);
void printSales(const double sales[NUM_SALESPEOPLE][MONTHS]);

void main() {
	double sales[NUM_SALESPEOPLE][MONTHS];
	printf("\n\n\n");
	double total = getSales(sales);
	printSales(sales);
	printf("\nTotal sales for this event:     $%.2f\n\n", total);
}

double getSales(double sales[NUM_SALESPEOPLE][MONTHS]) {
	double total = 0;
	for (int i = 0; i < NUM_SALESPEOPLE; i++) {
		for (int j = 0; j < MONTHS; j++) {
			printf("Enter the sales for sales person %d in month %d: ", i + 1, j + 1);
			scanf("%lf", &sales[i][j]);
			total += sales[i][j];
		}//end for each MONTH
	}//end for each SALESPEOPLE
	return total;
}//end of getSales

void printSales(const double sales[NUM_SALESPEOPLE][MONTHS]) {
	double subtotal = 0;
	for (int i = 0; i < NUM_SALESPEOPLE; i++) {
		printf("Sales Person %d\t", i + 1);
		for (int j = 0; j < MONTHS; j++) {
			printf("$%.2f\t", sales[i][j]);
			subtotal += sales[i][j];
		}//end of MONTH
		printf("Total Sales: $%.2f\n", subtotal);
		subtotal = 0;
	}//end of SALESPEOPLE
}//end of printSales

