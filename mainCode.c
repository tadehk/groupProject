#include <stdio.h>
#include "header.h"

int main() {
    float numDays, timeDep, timeArr, air, carRent;
    float privateCar, parking, taxi, conference, hotel, meal;
    float total = 0;
    float totalAllowed = 0;


    numDays = numOfDays();
    timeDep = timeOfDepart();
    timeArr = timeOfArrival();
    air = airFare();
    carRent = carRental();
    privateCar = privateCarExpense();
    parking = parkingFees();
    taxi = taxiFees();
    conference = conferenceFees();
    hotel = hotelFees(numDays - 1, &totalAllowed);
    meal = mealFees(numDays, timeDep, timeArr, &totalAllowed);

  
    total = numDays + timeDep + timeArr + air + carRent + privateCar + parking + taxi + conference + hotel + meal;
    //totalAllowed

}