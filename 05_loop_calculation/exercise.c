#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Category: Loop with Calculation
    // Textbook Reference: Deitel Paul, Deitel Harvey-C How to Program (9th Edition), Chapter 3, Exercise 3.17
    // What the program does:Calculates total interest, total amount payable, and monthky payment for mortgage accounts until -1 is enetered.
    // Concepts used: Sentinental controlled while loop, double floating-pointvariables with %lf, sequential calculations, and formatted output.
    // How it works:  Accepts mortgage amount, term (years), and rate; calculates monthly payment; displaysresult; and prompts for next account.


    double mortgage_amount,mortgage_term, interest_rate, total_interest_payable, total_amount_payable, monthly_payable_interest;
    printf("Enter motgage amount in dollars(-1 to quit):");
    scanf("%lf", &mortgage_amount);

     while (mortgage_amount != -1){
        printf("Enter mortgage term (in years):");
        scanf("%lf", &mortgage_term);
        printf("Enter interest rate:");
        scanf("%lf", &interest_rate);

        total_interest_payable = mortgage_amount * interest_rate * mortgage_term;
        total_amount_payable = mortgage_amount + total_interest_payable;
        monthly_payable_interest = total_amount_payable / (mortgage_term * 12);
        printf("Your monthly payable interest is $%.2f \n\n", monthly_payable_interest);
        printf("Enter the mortgage amount in dollars (-1 to quit):");
        scanf("%lf", &mortgage_amount);

     }

    return 0;
}
