/*Kaylynn Trevillion
* 10/24/2023
* COSC 1336 002
* (-1 Purpose Line: The correct assignment number is Program03: Fractions (corrected))
* Purpose: Add and subtract two given fractions and output
the result in fraction and decimal forms. (Program03: Fractions)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//function prototypes
void outputFraction(int numerator, int denominator);
double fractionToDecimal(int numerator, int denominator);
void addingFractions(int numerator1, int denominator1, int
	numerator2, int denominator2);
void subtractingFractions(int numerator1, int denominator1,
	int numerator2, int denominator2);


int main() {
	int numerator1, denominator1, numerator2, denominator2;
	//numeraator and denominator inputs
	printf("Please enter a numerator: ");
	scanf("%d", &numerator1);
	printf("Please enter a denominator (zero is not allowed): ");
	scanf("%d", &denominator1);
	printf("Please enter a numerator: ");
	scanf("%d", &numerator2);
	printf("Please enter a denominator (zero is not allowed): ");
	scanf("%d", &denominator2);
	printf("\n");
	//adding fractions
	outputFraction(numerator1, denominator1);
	printf(" + ");
	outputFraction(numerator2, denominator2);
	printf(": The resulting fraction is ");
	addingFractions(numerator1, denominator1, numerator2,
		denominator2);
	//subtracting fractions
	outputFraction(numerator1, denominator1);
	printf(" - ");
	outputFraction(numerator2, denominator2);
	printf(": The resulting fraction is ");
	subtractingFractions(numerator1, denominator1, numerator2,
		denominator2);
	return 0;
}//end of main

//other fxns
void addingFractions(int numerator1, int denominator1,
	int numerator2, int denominator2) {
	int sumNumerator, sumDenominator;
	sumNumerator = (numerator1 * denominator2) + (denominator1 * numerator2);
	sumDenominator = denominator1 * denominator2;
	outputFraction(sumNumerator, sumDenominator);
	printf(".\n");
	printf("The decimal representation of ");
	outputFraction(sumNumerator, sumDenominator);
	double sumDecimal = fractionToDecimal(sumNumerator, sumDenominator);
	printf(" is %.2f", sumDecimal);
	printf("\n\n");

}//end of addingFractions

//- 2 NEVER abbreviate variable names.Use good variable names 
//and autocomplete instead. (Corrected)
void subtractingFractions(int numerator1, int denominator1,
	int numerator2, int denominator2) {
	int differenceNumerator, differenceDenominator;
	differenceNumerator = (numerator1 * denominator2) - (denominator1 * numerator2);
	differenceDenominator = denominator1 * denominator2;
	outputFraction(differenceNumerator, differenceDenominator);
	printf(".\n");
	printf("The decimal representation of ");
	outputFraction(differenceNumerator, differenceDenominator);
	double differenceDecimal = fractionToDecimal(differenceNumerator, differenceDenominator); 
	printf(" is %.2f", differenceDecimal);
}//end of subtractingFractions

//- 4 fractionToDecimal should not output anything and should 
//return a double to be used by the program as output.
double fractionToDecimal(int numerator, int denominator) {
	double decimalOfFraction;
	decimalOfFraction = (double)numerator / (double)denominator;
	return decimalOfFraction;
}//end of fractionToDecimal
/* - 3 You will need to call outputFraction about 8 times in this
	program.printing % d / % d should ONLY be done in outputFraction. (Corrected)*/
void outputFraction(int numerator, int denominator) {
	printf("%d/%d", numerator, denominator);
}//end of outputFraction

/*-1 Purpose Line: The correct assignment number is Program03: Fractions (Corrected)
-3 You will need to call outputFraction about 8 times in this program. 
	printing %d/%d should ONLY be done in outputFraction. (Corrected)
-2 NEVER abbreviate variable names. Use good variable names and autocomplete instead.(corrected)
-4 fractionToDecimal should not output anything and should 
	return a double to be used by the program as output.(Corrected)
*/