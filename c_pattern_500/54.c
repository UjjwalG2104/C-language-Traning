#include <stdio.h>
int main()
{
    int n=5;

    int i, j;

    int x=1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <=  i ; j++)
        {
            printf("%d", x - i);
            x++;
        }
        printf("\n");
    }
    return 0;
}

// 1
// 1 2
// 2 3 4
// 4 5 6 7
// 7 8 9 10 11

