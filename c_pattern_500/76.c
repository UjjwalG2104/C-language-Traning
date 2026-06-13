#include <stdio.h>

int main ()
{
    int i, j;
    int n = 5;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n-i + 1; j++)
        {
            printf("%2d", n -i + j);
        }
        printf("\n");
    }

    return 0;
}


//5 6 7 8 9
// 4 5 6 7
// 3 4 5
// 2 3
// 1