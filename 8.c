// Write a program to print squares of the first 10 natural numbers

#include <stdio.h>
int main()
{
    int sq;
    for (int i = 0; i <= 9; i++)
    {
        sq = i * i;
        printf("\nThe square of %d is %d", i,sq);
    }

    return 0;
}