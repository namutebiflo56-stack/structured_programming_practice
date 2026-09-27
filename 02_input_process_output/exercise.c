#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Category: Input-Process-Output
    // Textbook: Deitel Paul, Deitel Harvey, C How to Program (9th dition), Chapter 2, exercise 2.16
    // What the program does: The program prompts the user to enter two integers, calculate their sum, product, difference, quotient, and remainder and displays each result to a console screen.
    // Concepts used: variables (int), scanf(), printf(), arithmetic operations ('+', '-', '*', '/', %')
    // How it works: The program declares integer variables to hold user input and calculation results. It uses 'printf()' to ask the user for two numbers, 'scanf()' to store the numbers in the memory, arithmetic operations ('+', '-', '*', '/', '%') to compute the outputs, and 'printf()' to display the results.

    int num1, num2, sum, product, difference, quotient, remainder;
    printf("Enter num1:");
    scanf("%d", &num1);
    printf("Enter num2:");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("\n Your sum is %d", sum);

    product = num1 * num2;
    printf("\n Your product is %d", product);

    difference = num1 - num2;
    printf("\n Your difference is %d", difference);

    quotient = num1 / num2;
    printf("\n Your quotient is %d", quotient);

    remainder = num1 % num2;
    printf("\n Your remainder is %d", remainder);
    return 0;
}
