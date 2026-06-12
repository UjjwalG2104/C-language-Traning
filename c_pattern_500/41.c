#include <stdio.h>

int main()
{
    int n=1;

    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <=  i ; j++)
        {
            printf("%3d", n);
            n++;
        }
        printf("\n");
    }
    return 0;
}

//output
//  1
//  2  3
//  4  5  6
//  7  8  9 10

