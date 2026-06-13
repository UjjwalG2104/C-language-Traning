#include <stdio.h>

int main ()
{
    int i, j;
    int n = 5;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n-i; j++)
        {
            printf("%2d", n -j + 1);
        }
        printf("\n");
    }

    return 0;
}

// 54321
// 5432
// 543
// 54
// 5