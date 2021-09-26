#include <stdio.h>
#include "header.h"

//method that gets the expense of the private if used
float privateCarExpense()
{
    float carCostPerMile;
    printf("\nHow many miles did you drive with your private vehicle?");
    scanf("%f", carCostPerMile);
    if (carCostPerMile < 0)
    {
        printf("invalid input!");
    }
    else
    {
        return carCostPerMile * 0.37;
    }
}

//method that gets the total Parking Fees
float parkingFees()
{
    float daysParked;
    float parkingFeePerDay;
    printf("How many days did you park?");
    scanf("%f", daysParked);
    printf("\nHow much was your parking fee per day");
    scanf("%f", parkingFeePerDay);
    return (parkingFeePerDay - 6) * daysParked;
}

//method that gets the total Taxi Fees
float taxiFees()
{
    float daysTaxiUsed;
    float taxiFeePerDay;
    printf("How many days did you park?");
    scanf("%f", daysTaxiUsed);
    printf("\nHow much was your parking fee per day");
    scanf("%f", taxiFeePerDay);
    return (taxiFeePerDay - 10) * daysTaxiUsed;
}
