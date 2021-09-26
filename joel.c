#include <stdio.h>
#include "header.h"

//method that gets the expense of the private if used
float privateCarExpense()
{
    float carCostPerMile = -1;
    while (carCostPerMile < 0) {

        printf("\nHow many miles did you drive with your private vehicle?");
        scanf("%f", carCostPerMile);

        if (carCostPerMile <= 0)
        {
            printf("Invalid Input!");
        }
        else
        {
            printf("You entered: %f\n", carCostPerMile);
            carCostPerMile = carCostPerMile * 0.37;
        }
    }
            return carCostPerMile;

  
}

//method that gets the total Parking Fees
float parkingFees()
{
    float daysParked;
    float parkingFee;
    float counter;
    printf("How many days did you park?");
    if (daysParked <= 0)
    {
        printf("Invalid Input!");
    }
    else
    {
        scanf("%f", daysParked);
        for (float i = 0; i < daysParked; i++)
        {
            printf("Parking Fee for day #%f", i + 1);
            scanf("%f", parkingFee);
            if (parkingFee <= 0)
            {
                printf("Invalid Input!");
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
