#include <stdio.h>
#include "header.h"

//method that counts the number of days on vacation
float numOfDays(){
    float days = 0;
    
    while (days < 1){
        printf("Please enter the number of days you are going on vacation: ");
        scanf("%f", &days);
       if (days < 1) {
           printf("Invalid number of days, please try again.\n");
       }
    }
    printf("\nYou entered: %.0f", days);
    return days;
}
//method that gets the time of departure
float timeOfDepart(){
    float timeD = -1;

    while (timeD < 0) {
       printf("\nWhat time are you leaving? Enter departure time in 24 hour format: ");
        scanf("%f", &timeD);

        if (timeD<0){
             printf("Time can not be less than 0, please try agian.\n");
        }
   } 
    printf("The time you entered is: %.2f\n", timeD);
    return timeD;
}
//method that gets the time of arrival
float timeOfArrival(float departure, float numOfDays){
    float timeA = -1;

    while (timeA < 0 || (numOfDays == 1 && timeA < departure)) {
       printf("\nWhat time are you arriving? Enter arrival time in 24 hour format: ");
        scanf("%f", &timeA);

        if (timeA < 0 || (numOfDays == 1 && timeA < departure)){
             printf("Arrival time can not be less than 0 or before time of departure on SINGLE day trips, please try agian.\n");
        }
        // if (numOfDays == 1 && timeA < departure){
        //     printf("You can not arrive before your departure time for a one day trip, please try again\n");
        // }
   } 
    printf("The time you entered is: %.2f\n", timeA);
    return timeA;
}
//method that gets the airfare
float airFare(){
    float planeCost = -1;
    while (planeCost < 0) {
       printf("\nHow much does your plane cost round-trip? $");
        scanf("%f", &planeCost);

        if (planeCost<0){
             printf("Amount cant be negative, please enter again:\n");
        }
   } 
    printf("The amount you entered is: %.2f\n", planeCost);
    return planeCost;
}
//method that gets the car rental cost
float carRental(){
    float carCost = -1;
    while (carCost < 0) {
       printf("\nHow much does your car rental cost? $");
        scanf("%f", &carCost);

        if (carCost<0){
             printf("Amount cant be negative, please enter again:\n");
        }
   } 
    printf("The amount you entered is: %.2f\n", carCost);
    return carCost;
}
