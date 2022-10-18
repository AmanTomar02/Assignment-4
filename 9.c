// Write a program to print cubes of the first 10 natural numbers

#include <stdio.h>
int main()
{
    int cube;
    for (int i = 0; i <= 9; i++)
    {
        cube = i * i * i;
        printf("\nThe square of %d is %d", i, cube);
    }

    return 0;
}