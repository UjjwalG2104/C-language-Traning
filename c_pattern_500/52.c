#include <stdio.h>

int main()

{
    int n =5;
    int i, j;
    int x = n, y ,t;

    for(i = n;i>=1;i--)
    {
        y = i + 1;
        t = x;
        
        for (j = n; j >= i; j--)
        {
            printf("%2d", t);
            t = t - y;
            y++;
        }
        printf("\n");
        x = x + i - 1 ;
    }
    return 0;
}


 // 5
 // 9 4
 //12 8 3
 //1411 7 2
 //151310 6 1