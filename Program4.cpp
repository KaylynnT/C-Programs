/*Kaylynn Trevillion
COSC 1336 002
10/31/2023
Purpose: A bank application where a user will enter their 
current balance and the amount they want to withdraw or deposit, 
and the application will calculate their new balance. (Program04: Bank Application)*/

#define _CRT_SECURE_NO_WARNINGS
#define OVERDRAFT_FEE 25.00
#include <stdio.h>

void main() {
	double oldBalance, transactionAmount, newBalance; 
	printf("Please enter your current balance and the amount of your transaction, separated by a space: ");
	scanf("%lf %lf", &oldBalance, &transactionAmount);
	newBalance = oldBalance + transactionAmount;
	printf("Your previous balance was $%.2f\n", oldBalance);
	if (newBalance < 0 && transactionAmount <0) {
		printf("You performed a withdraw of $%.2f\n", transactionAmount);
		printf("You have an overdraft fee of $%.2f\n", OVERDRAFT_FEE);
		newBalance = newBalance - OVERDRAFT_FEE;
	}
	else if (newBalance > 0 && transactionAmount < 0) {
		printf("You performed a withdraw of $%.2f\n", transactionAmount);
	}
	else {
		printf("You performed a deposit of $%.2f\n", transactionAmount);
	}
	printf("Your new balance is $%.2f", newBalance);
}

/* - 3 Most of your output is identical between your three cases such as previous balance and new balance output.
Put these lines before the if or after the if to prevent code duplicationand potential error duplication as well.
(fixed)
- 2 There's no need for printf("\n"); You can simply put the newlines in the other output. For instance, if you 
change line 18 to printf("Your previous balance was $%.2f\n", oldBalance);, line 19 becomes unnecessary. (Fixed)*/