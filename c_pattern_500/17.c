#include<stdio.h>

int main()
{
    int n = 5;
    int i,j;

    for(i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%2d ", (2*(i+j))-3);
           
        }
        printf("\n");

    }
    return 0;
}
