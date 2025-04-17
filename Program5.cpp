/*Kaylynn Trevillion
COSC 1336 002
12/1/2023
Purpose: Read in the current date, the users birthdate, and the users heart rate.
and infor them of their maximum heart rate, and their target heart rate zone. (Program05: Target Heart Rate)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//funtion prototypes
int computeAge(int birthMonth, int birthDay, int birthYear, int currentMonth, int currentDay, int currentYear);
int computeMaximumHeartRate(int age);
int computeZoneMinimum(int maximumHeartRate);
int computeZoneMaximum(int maximumHeartRate);


void main() {

    //Promt and read for birth month, day, and year
    int birthMonth, birthDay, birthYear, userAge, maximumHeartRate, zoneMinimum, zoneMaximum, userHeartRate;
    printf("Please enter your birth date here (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &birthMonth, &birthDay, &birthYear);
    //END OF BIRTH DATE CHECKS
    // V V Switch to current date V V
    //Promt and read for current month, day, and year
    int currentMonth, currentDay, currentYear;
    printf("Please enter the current date here (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &currentMonth, &currentDay, &currentYear);

    //Promt and read in user heart rate
    printf("Please enter your current heart rate: ");
    scanf("%d", &userHeartRate);
    //Computing and printing user age
    userAge = computeAge(birthMonth, birthDay, birthYear, currentMonth, currentDay, currentYear);
    printf("Your current age is %d.\n", userAge);
    //Computing and printing the maximum heart rate
    maximumHeartRate = computeMaximumHeartRate(userAge);
    printf("Your maximum heart rate is %d.\n", maximumHeartRate);
    //Computer the max and min HR and printing the target range
    zoneMinimum = computeZoneMinimum(maximumHeartRate);
    zoneMaximum = computeZoneMaximum(maximumHeartRate);
    printf("Your ideal target heart rate ranger is between %d and %d.\n", zoneMinimum, zoneMaximum);
   //Let the user know if they are in range
    if ((userHeartRate < zoneMinimum) || (userHeartRate > zoneMaximum)) 
        printf("Warning! You are out of your target heart rate range.");
    
    else 
        printf("Congratulation! You are in your target heart rate range.");
    
} //end of main

int computeAge(int birthMonth, int birthDay, int birthYear, int currentMonth, int currentDay, int currentYear) {
    int age;
    age = currentYear - birthYear;
    if ((currentMonth < birthMonth) || ((currentMonth == birthMonth) && (currentDay < birthDay))) 
        age = age - 1;
  
    return age; 
}//end of computeAge

int computeMaximumHeartRate(int age) {
    return (int)(220 - age);
    
}//end of computeMaximumHeartRate

int computeZoneMinimum(int maximumHeartRate) {
  
    return (int)(maximumHeartRate * .5);
   
}//end of computeZoneMinimum

int computeZoneMaximum(int maximumHeartRate) {
    
    return (int)(maximumHeartRate * .85);
    
}//end of computeZoneMaximum

/*-1 Correct assignment number is Program05:Target Heart Rate
(Fixed)
-2 NEVER abbreviate variable names or function names! (Such as max or min)
(Fixed)
-2 As much as I appreciate the extra effort, not input verification of dates was required. 
The overwhelming amount of code for this should be removed (I know they did it online)
(I did feel like this added to the quality of the program, but I have removed it as requested.)
-1 Remove unnecessary braces from single-line body ifs and elses.
(Fixed)
-4 You must cast the result of computeZoneMinimum and computeZoneMaximum before returning them because 
the result of the multiplication is a double and cannot be accurately stored in an int. 
This results in incorrect output as well!
(Fixed)
-1 computeMaximumHeartRate, computeZoneMinimum, and computeZoneMaximum could each be one line. 
For instance, computeZoneMinimum could just be return (int)(maximumHeartRate*0.50);
(Fixed)*/