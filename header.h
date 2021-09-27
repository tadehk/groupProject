#ifndef HEADER_H
#define HEADER_H

float numOfDays();
float timeOfDepart();
float timeOfArrival(float departure, float numOfDays);
float airFare();
float carRental();
float privateCarExpense();
float parkingFees(float *totalAllowableExpenses);
float taxiFees(float *totalAllowableExpenses);
float conferenceFees();
float hotelFees(int nightsStayed, float *totalAllowableExpenses);
float mealFees(int numDays, float departTime, float arriveTime, float *totalAllowableExpenses);
#endif