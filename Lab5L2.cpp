/*Kaylynn Trevillion
COSC 1336 002
11/2/2023
Purpose: To build a Fraction Calculator (Lab5L2)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//function prototypes
int getNumerator();
int getDenominator(); 
void outputProduct(int numerator1, int denominator1, int numerator2,
	int denominator2);
void outputQuotient(int numerator1, int denominator1, int numerator2,
	int denominator2);
int multiply(int firstNumber, int secondNumber); 

void main() {
	int response;
	printf("Please enter 1 for multiply, 2 for divid, ");
	printf("or 5 for exit: ");
	scanf("%d", &response);
	while (response != 5) {
		int numerator1 = getNumerator();
		int denominator1 = getDenominator();
		int numerator2 = getNumerator();
		int denominator2 = getDenominator();

		switch (response) {
		case 1:
			outputProduct( numerator1, denominator1, numerator2, 
				denominator2);
			break;
		case 2:
			outputQuotient( numerator1, denominator1, numerator2,
				denominator2);
			break;
		case 5:
			break;
		default:
			printf("Please enter 1, 2, or 5, you morom!\n");
			break;
		}//end of switch
	}//end of while
}//end of main

int getNumerator() {
	int numerator;
	printf("Please enter the numerator (any integer): ");
	scanf("%d", &numerator);
	return numerator;
}//end of getNumerator

int getDenominator() {
	int denominator;
	do {
		printf("Please enter the denominator (positive integer only): ");
		scanf("%d", &denominator);
	} while (denominator <= 0); 
	return denominator;
}//end of getDenominator
void outputProduct(int numerator1, int denominator1, int numerator2,
	int denominator2) {
	int numeraotrProduct = multiply(numerator1, numerator2);
	int denominatorProduct = multiply(denominator1, denominator2);
	printf("%d/%d * %d/%d. The resulting fraction is %d/%d.\n",
		numerator1, denominator1, numerator2, denominator2, 
		numeraotrProduct, denominatorProduct);
}//end fo outputProduct
void outputQuotient(int numerator1, int denominator1, int numerator2,
	int denominator2) {
	int numeratorQuotient = multiply(numerator1, denominator2);
	int denominatorQuotient = multiply(denominator1, numerator2);
	printf("%d/%d / %d/%d. The resulting fraction is %d/%d.\n",
		numerator1, denominator1, numerator2, denominator2,
		numeratorQuotient, denominatorQuotient); 

}//end of outputQuotient
int multiply(int firstNumber, int secondNumber) {
	return firstNumber * secondNumber; 
}//end of multiply