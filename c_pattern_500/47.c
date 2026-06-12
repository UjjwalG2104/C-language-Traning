#include <stdio.h>
int main()
{
    int n=5;

    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <=  i ; j++)
        {
            printf("%2d", i*j);
        }
        printf("\n");
    }
    return 0;
}

//  1
//  2  4
//  3  6  9
//  4  8 12 16
//  5 10 15 20 25