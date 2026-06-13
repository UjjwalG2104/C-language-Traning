#include <stdio.h>

int main()
{
    int n = 5, x = 2;
    int i, j;

    for(i = n; i >= 1; i--)
    {
        for(j = 1; j <= n; j++)
        {
            if(i <= j)
            {
                printf("%2d ", x);
                x += 2;
            }
            else
            {
                printf("   ");
            }
        }

        printf("\n");
    }

    return 0;
}

//             2 
//          4  6 
//       8 10 12 
//   14 16 18 20 
//22 24 26 28 30 