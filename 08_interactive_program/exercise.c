#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Category: Interactive Console Program
    // Textbook: Deitel Paul, Deitel Harvey, C How to program (9th Edition), Chapter 3, Exercise 3.33
    // What the program does:Draws a hollow square of asterisks (*) based on a user entered side length.
    // Concepts used:Nested loops (outer for rows, inner for columns), conditional logic (if/ else) for border detection.
    // How it works:Loops through rows and columns from 1 to side . Prints '*' if on the outer edge (row 1, row side, column 1, column side);otherwise prints a space.

    int side, row;
    printf("Enter the side length (1-20):");
    scanf("%d", &side);

    if (side < 1 || side >20){
        printf("Invalid size length");
    }
    while (row <= side){
        int column = 1;
        while (column <= side){
            if (row == 1 || row == side ||column == 1 || column == side){
                printf("*");
            }
            else {
                printf(" ");
            }
            column++;
        }
            printf(" \n");
            row++;
        }

    return 0;
}
