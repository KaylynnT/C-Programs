/*Kaylynn Trevillion
* COSC 1336 002
* 10/12/2023
* Purpose: To perform two unrelated calculations in functions (Lab3L5)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//function prototypes
int projectPopulationOfGotham(int yearAfter1990);
double calculateSpeedOfSound(double temperature);

void main() {
	int yearAfter1990;
	printf("Please enter a year after 1990: ");
	scanf("%d", &yearAfter1990);
	int population = projectPopulationOfGotham(yearAfter1990);
	printf("The population for Gotham City in the year %d", yearAfter1990);
	printf("\nis estimated to be %d according to an estimate from 1990.\n", population);

	double temperature;
	printf("\nPlease enter an air tempature in degrees Fahrenheit: ");
	scanf("%lf", &temperature);
	double speedOfSound = calculateSpeedOfSound(temperature);
	printf("The speed of sound through air that is %.2f", temperature);
	printf(" degrees Fahrenheit is %.2f ft/sec.\n", speedOfSound);

}

int projectPopulationOfGotham(int yearAfter1990) {
	yearAfter1990 = yearAfter1990 - 1990;
	int population = 52966 + 2184 * yearAfter1990;
	return population;
}

double calculateSpeedOfSound(double temperature) {
	double speedOfSound = 1086 * sqrt((5 * temperature + 297) / (247));
	return speedOfSound;
}
