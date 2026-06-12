#include<stdio.h>

int main()

{
    int i , j ,k = 0;
    int n = 4;

    for(i=1;i<=n;i++)
    {
        k+=i;
        for (j = k; j > k - i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

}

// 1
// 32
// 654
// 10987
