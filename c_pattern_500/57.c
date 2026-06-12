#include <stdio.h>
int main()
{
    int i , j;
    int n1=0, n2 = 1 , r1=n2;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%2d", r1);
            r1 = n1 + n2;
            n1 = n2;
            n2 = r1;
        }
        printf("\n");
    }
    return 0;
}

// 1
 // 1 2
 // 3 5 8
 // 13 21 34 55
 // 89 144 233 377 610