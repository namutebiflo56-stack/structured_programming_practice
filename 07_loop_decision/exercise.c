#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Category: Loop Decision
    // Textbook reference: Deitel Paul, Deitel Harvey, C How to Program (9th Edition), Chapter 3, Exercise 3.24
    // What the program does:Generates a 4-column table showing powers of ten multiples for numbers 1 through 10.
    // Concepts used: while loop, tab fromatting (\t), and arithmetic transformation.
    // How it works:Loops from 1 to 10, calculating N, 10*N, 100*N, 1000*Non each iterationand printing them in tab-separated columns.
    int counter = 1;
    printf("N\t10*N\t100*N\t1000*N\n\n");

    while (counter <= 10){

        printf("%d\t%d\t%d\t%d\n", counter, counter * 10, counter * 100, counter * 10000);

        counter++;
    }

    return 0;
}
