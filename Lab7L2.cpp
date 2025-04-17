/*Kaylynn Trevillion
COSC 1336 002
11/14/2023
Purpose: To process car sales information (Lab7L2)*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//function prototypes
double getTotal(const double sales[]);
void printPercentages(const double sales[], double total);

void main() {
	double sales[6];
	double total = 0;
	for (int i = 0; i < 6; i++) {
		printf("Please enter the sales for person %d: ", i + 1);
		scanf("%lf", &sales[i]);
	}
	total = getTotal(sales);
	printPercentages(sales, total);
}//end of main
double getTotal(const double sales[]) {
	double total = 0;
	for (int i = 0; i < 6; i++)
		total += sales[i];
	return total;
}//end of getTotal
void printPercentages(const double sales[], double total) {
	printf("Sales Person\t\tPercentage of Sales\n");
	for (int i = 0; i < 6; i++)
		printf("Sales Person %d\t\t%.2f%%\n", i+1, sales[i]/total*100);
	printf("\nTotal Sales for Event: \t%.2f\n\n\n", total);
}//end of printPercentages