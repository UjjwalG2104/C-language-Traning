#include<stdio.h>

int main()
{
    int n =5;
    int i, j;
    int x = ( n*(n+1))/2;


    for(i = n;i>=1;i--)
    {
        for (j = n; j >= i; j--)
        {
            printf("%2d", x--);
           
        }
        printf("\n");
    }
    return 0;
}

// 15
// 14 13
// 12 11 10
//  9  8  7  6
//  5  4  3  2  1