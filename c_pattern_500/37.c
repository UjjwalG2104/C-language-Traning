#include <stdio.h>

int main()
{
    int n=5;

    int i, j;
    for (i = n; i >= 1; i--)
    {
        for (j = n; j >=  i ; j--)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}

// 5
// 44
// 333
// 2222
// 11111