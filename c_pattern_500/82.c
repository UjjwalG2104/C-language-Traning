#include <stdio.h>

int main()
{
    int n = 5;
    int i, j;

    for(i = 0; i < n; i++)
    {
        for(j = n; j > i; j--)
        {
            printf("%2d ", i % 2);
        }

        printf("\n");
    }

    return 0;
}

// 0  0  0  0  0 
// 1  1  1  1 
// 0  0  0 
// 1  1 
// 0 
