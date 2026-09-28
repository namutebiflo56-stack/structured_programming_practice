#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Category: Loop Input
    // Textbook Reference: Deitel Paul, Deitel Harvey-C How to Program (9th Edition), Chapter  3, Exercise 3.23
    // What the concept does: Accepts 10 numbers from the user and determines the largest value entered.
    // Concepts used: Counter controlled while loop, if statement, and running maximum tracking.
    // How it works:Loops 10 times, reads each number, updates the largest variable if the current entered is greater, and prints the result upon completion.

    int counter =2, number, largest;
    printf("Enter number:");
    scanf("%d", &number);

    while (counter <= 10){
    printf("Enter the number:");
    scanf("%d", &number);


    if (number > largest){
        largest = number;
    }
    counter++;
    }
    printf("Largest number is %d \n ", largest);


    return 0;
}
