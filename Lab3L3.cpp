/*Kaylynn Trevillion
* COSC 1336 002
* 10/5/2023
* Purpose: To find the midpoint and slope of a line segment (Lab3L3)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//function prototypes
void printMidpoint(double x1, double y1, double x2, double y2);
void printSlope(double x1, double y1, double x2, double y2);

void main() {
	double x1, y1, x2, y2;
	//Prompt with “Please enter a value for x1: “.
	printf("Please enter a value for x1: ");
	//Read x1.
	scanf("%lf", &x1);
	//Prompt with “Please enter a value for y1: “.
	printf("Please enter a value for y1: ");
	//Read y1.
	scanf("%lf", &y1);
	//Prompt with “Please enter a value for x2 : “.
	printf("Please enter a value for x2: ");
	//Read x2.
	scanf("%lf", &x2);
	//Prompt with “Please enter a value for y2 : “.
	printf("Please enter a value for y2: ");
	//Read y2.
	scanf("%lf", &y2);
	//Call printMidpoint(x1, y1, x2, y2).
	printMidpoint(x1, y1, x2, y2);
	//Call printSlope(x1, y1, x2, y2).
	printSlope(x1, y1, x2, y2);

}

void printMidpoint(double x1, double y1, double x2, double y2) {
	//Compute midpointX = (x1 + x2) * 0.5,
	double midpointX = ( x1 + x2 ) * 0.5; 
	//Compute midpointY = (y1 + y2) * 0.5.
	double midpointY = ( y1 + y2 ) * 0.5;
	//Ouput “The midpoint is(“ + midpointX + ”, “ + midpoint + ”).”
	printf("The midpoint is %.2f, %.2f.", midpointX, midpointY);

}

void printSlope(double x1, double y1, double x2, double y2) {
	//Compute slopeNumerator = y2 – y1
	double slopeNumerator = y2 - y1;
	//Compute slopeDenominator = x2 – x1.
	double slopeDenominator = x2 - x1;
	//Ouput “The slope of your line is “ + slopeNumerator + ” / ”, +slopeDenominator + ”.”
	printf("The slope of your line is %.2f/%.2f.", slopeNumerator, slopeDenominator);
}

