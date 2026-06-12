#include <stdio.h>

int main()
{
    int n=5;

    int i, j;
    for (i = n; i >= 1; i--)
    {
        for (j = i; j <=  n ; j++)
        {
            printf("%2d", j);
        }
        printf("\n");
    }
    return 0;
}

//output
// 5
// 45   
// 345
// 2345
// 12345