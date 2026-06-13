#include <stdio.h>

int main()
{
    int n = 5;
    int i, j;

    for(i = n; i >= 1; i--)
    {
        for(j = 1; j <= n; j++)
        {
            if(i <= j)
                printf("%d", j);
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}

//    5
//   45
//  345
// 2345
//12345