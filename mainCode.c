#include <stdio.h>
#include "header.h"

int main() {
    float numDays, timeDep, timeArr, air, carRent;
    float privateCar, parking, taxi, conference, hotel, meal;
    float total = 0;
    float totalAllowed = 0;
    float excess = 0;
    float saved = 0;


    numDays = numOfDays();
    timeDep = timeOfDepart();
    timeArr = timeOfArrival(timeDep, numDays);
    air = airFare();
    carRent = carRental();
    privateCar = privateCarExpense();
    parking = parkingFees(&totalAllowed);
    taxi = taxiFees(&totalAllowed);
    conference = conferenceFees();
    hotel = hotelFees(numDays - 1, &totalAllowed);
    meal = mealFees(numDays, timeDep, timeArr, &totalAllowed);

  
    total = air + carRent + privateCar + parking + taxi + conference + hotel + meal;
    printf("\nThe total amount you spent is: $%.2f \n", total);
    printf("The total allowed expense is: $%.2f \n", totalAllowed);

    if (total > totalAllowed) {
        excess = total - totalAllowed;
            printf("\nThe total that should be reimbursed is: $%.2f\n", excess);

    }
    else {
        saved = (totalAllowed - total);
                    printf("\nThe total that should be saved is: $%.2f\n", saved);

    }


}