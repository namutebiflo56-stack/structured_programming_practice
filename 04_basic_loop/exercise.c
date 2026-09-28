#include <stdio.h>
#include <stdlib.h>

int main()
{   // Category: Basic Loop
    // Textbook Reference: Deitel Paul, Deitel Harvey, C How to Program (9th Edition), Chapter 3, Exercise 3.20
    // What the program does: Calculates gross pay for multiple employees including overtime pay(1.5) for hours worked over 40 until -1 is entered.
    // Concepts used: Sentinental controlled whie loop, if-else decision statement, double variables with lf format, and basic arithmetic.
    // How it works: It uses an initial input to test the sentinental condition (-1), calculates overtime pay inside the loop, prints the result, and prompts for the next employee's hours at the end of each iteration.

    double hours_worked, hourly_rate, gross_pay;
    printf(" Enter # of hours worked (-1 to end):");
    scanf("%lf", &hours_worked);

    while (hours_worked != -1 ){
        printf(" Enter hourly rate of the worker ($00.00):");
        scanf("%lf", &hourly_rate);

        if (hours_worked <= 40){
            gross_pay = hours_worked * hourly_rate;
        }
        else {
            gross_pay = (40 * hourly_rate) + ((hours_worked - 40)* hourly_rate * 1.5);
        }
        printf(" Salary is $%.2f\n", gross_pay);
        printf(" \n Enter # of hours worked (-1 to end):");
        scanf("%lf", &hours_worked);




    }

    return 0;
}
