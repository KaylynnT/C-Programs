/*Kaylynn Trevillion
* 10/24/2023
* COSC 1336 002
* Purpose: Add and subtract two given fractions and output
the result in fraction and decimal forms. (Program 3)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//function prototypes
int outputFraction(int numerator,int denominator);
double fractionToDecimal(int numerator,int denominator);
void addingFractions(int numerator1, int denominator1, int numerator2, int denominator2);
void subtractingFractions(int numerator1, int denominator1, int numerator2, int denominator2);


int main() {
	int numerator1, denominator1, numerator2, denominator2;
	printf("Please enter a numerator: ");
	scanf("%d", &numerator1);
	printf("Please enter a denominator (zero is not allowed): ");
	scanf("%d", &denominator1);
	printf("Please enter a numerator: ");
	scanf("%d", &numerator2);
	printf("Please enter a denominator (zero is not allowed): ");
	scanf("%d", &denominator2);
	printf("\n");
	outputFraction(numerator1,denominator2);
	printf("+");
	outputFraction(numerator2, denominator2);
	printf(": The resulting fraction is ");
	addingFractions(numerator1,denominator1,numerator2,denominator2);
	outputFraction(numerator1, denominator2);
	printf("-");
	outputFraction(numerator2, denominator2);
	printf(": The resulting fraction is ");
	subtractingFractions(numerator1,denominator1,numerator2,denominator2);


	return 0;
}//end of main

void addingFractions(int numerator1, int denominator1, int numerator2, int denominator2) {
	int sumNumerator, sumDenominator;
	sumNumerator = (numerator1 * denominator2) + (denominator1 * numerator2);
	sumDenominator = denominator1 * denominator2;
	printf("%d/%d.\n", sumNumerator, sumDenominator);
	printf("The decimal representation of %d/%d is ", sumNumerator, sumDenominator);
	fractionToDecimal(sumNumerator, sumDenominator);
	printf("\n\n");
	
	}
void subtractingFractions(int numerator1, int denominator1, int numerator2, int denominator2) {
	int diffNumerator, diffDenominator;
	diffNumerator = (numerator1 * denominator2) - (denominator1 * numerator2);
	diffDenominator = denominator1 * denominator2;
	printf("%d/%d.\n", diffNumerator, diffDenominator); 

}


double fractionToDecimal(int numerator, int denominator) {
	double decimalOfFraction;
	decimalOfFraction = (double)numerator / (double)denominator;
	return decimalOfFraction;
}//end of fractionToDecimal

int outputFraction(int numerator, int denominator) {
	printf("%d/%d", numerator, denominator);
}//end of outputFraction