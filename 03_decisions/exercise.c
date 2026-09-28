#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Category: Decisions
    // Textbook Reference:Deitel Paul, Deitel Harvey, C How to Program (9th Edition), Chapter 3, Exercise 3.38.
    // What the Program does:Reads an integer (up to 5 digits) and counts how many of its digits are 9s.
    // Concepts used: % to extract digits, / to shift digits, and if/else decisiom logic

    int number, temp, count = 0;
    printf("Enter an integer (upto 5 digits):");
    scanf("%d", &number);

    temp = number;

    while (temp > 0){
        int digit = temp % 10;

        if (digit == 9){
            count++;
        }
        else {

        }
        temp = temp /10;
    }
    printf("The number %d contains %d nine(s).\n", number, count);
}
