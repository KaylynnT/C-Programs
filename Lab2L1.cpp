/*Kaylynn Trevillion
  COSC 1336 002
  9/7/2023
  Purpose: TO test input and output (Lab2L1)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TAX_RATE 0.0625
#define COPY_PRICE 0.05

void main() {
	double x, y, result, total;
	int numCopies;
	char first, last;

	//prompt the user for their first and last initial
	printf("Please enter your first and last initial separated by a space: ");
	//read the initials and store in first and last
	scanf("%c %c", &first, &last);
	//prompt the user for values for x & y
	printf("Please enter the values of x and y separated by a space (decimals allowed): ");
	//read the values and store in x & y
	scanf("%lf %lf", &x, &y);
	//add an assignment statement to assign the 
	//following formula to result 
	result = ((5 * x + 6) / 4) - (16 / (x * y - 4));
	//output the values of x, y, and result in 
	//the following format: Value of x: ...[tab] 
	//Value of y:..[tab]Result:...
	printf("Value of x: %.2f\tValue of y: %.2f\tResult: %.2f\n",
		x, y, result);
	//so that if the values stored in x, y, and 
	//result are 2.5, 6.4, 3.29157 output would 
	//look like the following:

	//Value of x: 2.50     Value of y: 6.40     Result: 3.29

	//test your program with three sets of data 
	//and verify the results with a calculator. 
	//record the values for all three sets in 
	//comments below the output statement.

	//the next section will determine the total 
	//charges at a copy center.

	//prompt and read the number of numCopies
	printf("Please enter the number of copies: ");
	scanf("%d", &numCopies);
	//store in total the number 
	//copies * COPY_PRICE (5 cents a copy)
	total = numCopies * COPY_PRICE;
	//store in total the current value of 
	//total + total * TAX_RATE (adding tax)
	total = total + total * TAX_RATE; 
	//output the initials of the user, number of 
	//copies, and the total in a meaningful way.
	printf("%c%c, the number of copies you had is: ", first, last);
	printf("%d. \nYour total price is: $%.2f.", numCopies, total);
	//Value of x : 24.20       Value of y : -89.00      Result : 31.76
	//Value of x: -34.80      Value of y: -52.00      Result: -42.01
	//Value of x: 74.00       Value of y: 29.00       Result: 93.99
}