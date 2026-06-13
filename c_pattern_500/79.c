#include <stdio.h>

int main()
{
    int i, j, k;
    int d1 = 1; // for printing
    int n = 4;  // size
    int d2 = (n * n) + 1;

    for(i = n; i >= 1; i--)
    {
        for(k = 1; k <= i; k++)
        {
            printf("%d ", d2);
            d2++;
        }

        d2--;
        d2 = d2 - ((i - 1) * 2);

        printf("\n");
    }

    return 0;
}

//17 18 19 20 
//14 15 16 
//12 13 
//11 