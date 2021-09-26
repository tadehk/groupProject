#ifndef HEADER_H
#define HEADER_H

float numOfDays();
float timeOfDepart();
float timeOfArrival();
float airFare();
float carRental();
float privateCarExpense();
float parkingFees();
float taxiFees();
float conferenceFees();
float hotelFees(int nightsStayed, float *totalAllowableExpenses);
float mealFees(int numDays, float departTime, float arriveTime, float *totalAllowableExpenses);
#endif