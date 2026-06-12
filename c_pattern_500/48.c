#include <stdio.h>

int main()
{
    int n =5;
    int i, j;
    int x = 1,y,t;

    for(i = n;i>=1;i--)
    {
        y = i;
        t = x;
        
        for (j = n; j >= i; j--)
        {
            printf("%2d", t);
            t = t - y;
            y++;
        }
        printf("\n");
       
    }
    return 0;
}

// 1
// 24
// 369
// 4812
// 5101510