#include <stdio.h>
#include "header.h"

//method that gets the expense of the private if used
float privateCarExpense()
{
    float carCostPerMile;
    printf("\nHow many miles did you drive with your private vehicle? ");
    scanf("%f", &carCostPerMile);
    if (carCostPerMile <= 0)
    {
        printf("Invalid Input!");
        privateCarExpense();
    }
    else
    {
        return carCostPerMile * 0.27;
    }
            return carCostPerMile;

  
}

//method that gets the total Parking Fees
float parkingFees(float *totalAllowableExpenses)
{
    float daysParked;
    float parkingFee;
    float counter;
    printf("\nHow many days did you park? ");
    scanf("%f", &daysParked);
    if (daysParked <= 0)
    {
        printf("\nInvalid Input!");
        parkingFees(totalAllowableExpenses);
    }
    else
    {
        *totalAllowableExpenses += daysParked * 6;
        for (float i = 0; i < daysParked; i++)
        {
            printf("\nParking Fee for Day #%.0f: $", i + 1);
            scanf("%f", &parkingFee);
            if (parkingFee <= 0)
            {
                printf("\nInvalid Input!");
                i -= 1;
            }
            else if (parkingFee > 6)
            {
                counter += parkingFee - 6;
            }
            else if (parkingFee <= 6)
            {
                counter += parkingFee;
            }
        }
        return counter;
    }
}

//method that gets the total Taxi Fees
float taxiFees(float *totalAllowableExpenses)
{
    // float daysTaxiUsed;
    // float taxiFeePerDay;
    // printf("\nHow many days did you park?");
    // scanf("%f", daysTaxiUsed);
    // printf("\nHow much was your parking fee per day");
    // scanf("%f", taxiFeePerDay);
    // return (taxiFeePerDay - 10) * daysTaxiUsed;

    float daysTaxiUsed;
    float taxiFeePerDay;
    float counter;
    printf("\nHow many days did you use a taxi? ");
    scanf("%f", &daysTaxiUsed);
    if (daysTaxiUsed <= 0)
    {
        printf("\nInvalid Input!");
        parkingFees(totalAllowableExpenses);
    }
    else
    {
        *totalAllowableExpenses += daysTaxiUsed * 10;
        for (float i = 0; i < daysTaxiUsed; i++)
        {
            printf("\nTaxi Fee for Day #%.0f: $", i + 1);
            scanf("%f", &taxiFeePerDay);
            if (taxiFeePerDay <= 0)
            {
                printf("\nInvalid Input!");
                i -= 1;
            }
            else if (taxiFeePerDay > 10)
            {
                counter += taxiFeePerDay - 10;
            }
            else if (taxiFeePerDay <= 10)
            {
                counter += taxiFeePerDay;
            }
        }
        return counter;
    }
}
