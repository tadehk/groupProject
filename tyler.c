#include <stdio.h>
#include "header.h"

//method that gets the total fees for conferences and seminars
float conferenceFees()
{
    float conferenceCost;
    printf("\nEnter total cost for conferences and seminars: $");
    scanf("%f", &conferenceCost);
    return conferenceCost;
}

//method that gets the hotel Fees
    //  nightsStayed should be the number of trip days subtracted by 1
float hotelFees(int nightsStayed, float *totalAllowableExpenses)
{
    float hotelCost;
    float companyHotel = 90.0;
    *totalAllowableExpenses = *totalAllowableExpenses + (companyHotel * nightsStayed);
    printf("\nEnter total cost of hotel per night: $");
    scanf("%f", &hotelCost);
    hotelCost = hotelCost*nightsStayed;
    return hotelCost;
}

//method that gets the total amount of each meal eaten
    //  assuming departTime and arriveTime should be in 24 hour format using type float
    //  ex: 7:00 am = 0700
    //      7:00 pm = 1900
float mealFees(int numDays, float departTime, float arriveTime, float *totalAllowableExpenses)
{
    int allowableMeals = 0;
    float allowedExpense = 0.0;

    //calculates number of meals and allowance for full days on trip
    //if numDays == 3, then at least 1 full day was stayed inbetween departure and arrival days.
    if (numDays > 2)
    {
        allowableMeals = (numDays-2) * 3;
        allowedExpense = (numDays-2) * 37.0;
    }

    //company meal allowance index
    float breakfast = 9.0;
    float lunch = 12.0;
    float dinner = 16.0;

    if (departTime < 700)
    {
        allowableMeals = allowableMeals + 3;
        allowedExpense = allowedExpense + breakfast + lunch + dinner;
    }
    else if (departTime < 1200)
    {
        allowableMeals = allowableMeals + 2;
        allowedExpense = allowedExpense + lunch + dinner;
    }
    else if (departTime < 1800)
    {
        allowableMeals = allowableMeals + 1;
        allowedExpense = allowedExpense + dinner;
    }

    if (numDays > 1)
    {
        if (arriveTime > 1900)
        {
            allowableMeals = allowableMeals + 3;
            allowedExpense = allowedExpense + breakfast + lunch + dinner;
        }
        else if (arriveTime > 1300)
        {
            allowableMeals = allowableMeals + 2;
            allowedExpense = allowedExpense + breakfast + lunch;
        }
        else if (arriveTime > 800)
        {
            allowableMeals = allowableMeals + 1;
            allowedExpense = allowedExpense + breakfast;
        }
    }

    //updates total allowance covered by the company for the entire trip by adding allowedExpense for meals
    *totalAllowableExpenses = *totalAllowableExpenses + allowedExpense;

    //prompts user to enter each individual meal price and sums expense in mealCost
    int i;
    float price, mealCost;
    for (i = 1; i <= allowableMeals; i++)
    {
        printf("\nMeal number %d cost: $", i);
        scanf("%f", &price);
        mealCost = mealCost + price;
    }

    return mealCost;
}