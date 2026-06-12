#include <stdio.h>

int main()
{
    int n=5;

    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <=  i ; j++)
        {
            printf("%d", i + j - 1);
        }
        printf("\n");
    }
    return 0;
}

// 1
// 23
// 345
// 4567
// 56789