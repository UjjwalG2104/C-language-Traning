#include<stdio.h>



int main()
{
    int n =5;
    int i, j;
    int px;

    for (i = 1; i <= n; i++)
    {
        px = 1;
        for (j = 1; j <= i; j++)
        {
            printf("%2d", px);
            px = px * (i - j) / j;
        }
        printf("\n");
    }
    return 0;
}    


 // 1
 // 1 1
 // 1 2 1
 // 1 3 3 1
 // 1 4 6 4 1