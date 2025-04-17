/*Kaylynn Trevillion
* COSC 1336 002
* 10/19/2023
Purpose: To create a summary (receipt) of a purchase at a music store (Lab4L4)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define LARGE_DISCOUNT_MINIMUM 100
#define SALES_TA 5

void main() {
	double totalPurchasePrice;
	char isTeacher;
	printf("Please enter the total purchase price: ");
	scanf("%lf", &totalPurchasePrice);
	printf("Please enter 'Y' if the purchaser is a teacher: ");
	scanf(" %c", &isTeacher);

	printf("Total Purchases: \t\t$%.2f\n", totalPurchasePrice);
	if (isTeacher == 'y' || isTeacher == 'Y') {
		int discount;
		if (totalPurchasePrice >= LARGE_DISCOUNT_MINIMUM)
			discount = 12;
		else
			discount = 10;
		double discountAmount = (.01 * discount) * totalPurchasePrice;
		double discountPrice = totalPurchasePrice - discountAmount;
		double tax = (.01 * SALES_TA) * discountPrice;
		double discountPriceWithSalesTax = discountPrice + tax;
		printf("Teacher's Discount (%d%%): \t%.2f\n", discount, discountAmount);
		printf("Discount Total:\t\t\t%.2f\n", discountPrice);
		printf("Sales Tax(%d%%):\t\t\t%.2f\n", SALES_TA, tax);
		printf("Total: \t\t\t\t$%.2f\n", discountPriceWithSalesTax);
	} //end of if isTeacher
	else {
		double tax = totalPurchasePrice * (.01 * SALES_TA);
		double priceWithTax = totalPurchasePrice + tax;
		printf("Sales Tax(%d%%):\t\t\t%.2f\n", SALES_TA, tax);
		printf("Total: \t\t\t\t$%.2f\n", priceWithTax);
	}//end of else (non-teacher)
} //end of main
