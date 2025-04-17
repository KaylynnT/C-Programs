/*Kaylynn Trevillion
* COSC1336 002
* 10/3/2013
* Purpose: To draw some ASCII houses (Lab3L1)*/

# define _CRT_SECURE_NO_WARMINGS
#include <stdio.h>

//function prototypes
void printTriangle();
void printRectangle();
void printHouse();

void main() {
	printHouse();
	printf("\n");
	printHouse();
	printf("\n");
	printHouse();
	printf("\n");
	printHouse();
	printf("\n");
	printHouse();
	printf("\n");
}

void printTriangle() {
	printf("  *\n");
	printf(" * *\n");
	printf("*****\n");
}

void printRectangle() {
	printf("*****\n");
	printf("*   *\n");
	printf("*   *\n");
	printf("*****\n");
}

void printHouse() {
	printTriangle();
	printRectangle();
}