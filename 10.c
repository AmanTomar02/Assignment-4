// Write a program to print a table of five .

#include <stdio.h>

int main()
{
    int i, T;

    for (i = 1; i <= 10; i++)
    {
        T = 5 * i;
        printf("5 x %d = %d\n", i, T);
    }

    return 0;
}
