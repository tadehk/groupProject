#include <stdio.h>
#include "header.h"

//method that counts the number of days on vacation
float numOfDays()
{
    float days;
    printf("Please enter the number of days you are going on vacation: ");
    scanf("%f", &days);
    if (days < 1)
    {
        printf("Invalid number of days, please try again.\n");
        numOfDays();
    }
    printf("\nYou enetered: %f", days);
    return days;
}
//method that gets the time of departure
float timeOfDepart()
{
    float timeD;
    printf("\nWhat time are you leaving? Enter departure time in 24 hour format. ");
    scanf("%f", &timeD);
    if (timeD < 0)
    {
        printf("Time can not be less than 0, please try agian.");
        timeOfDepart();
    }
    printf("The time you entered is: %f", timeD);
    return timeD;
}
//method that gets the time of arrival
float timeOfArrival()
{
    float timeA;
    printf("\n What time are you arriving? Enter departure time in 24 hour format.");
    scanf("%f", timeA);
    if (timeA < 0)
    {
        printf("Time can not be less than 0, please try again.");
        timeOfArrival();
    }
    return timeA;
}
//method that gets the airfare
float airFare()
{
    float planeCost;
    printf("\n How much is your plane ticket going to cost round-trip? ");
    scanf("%f", planeCost);
    return planeCost;
}
//method that gets the car rental cost
float carRental()
{
    float carCost;
    printf("\n How much is your car rental going to cost? ");
    scanf("%f", carCost);
    return carCost;
}
