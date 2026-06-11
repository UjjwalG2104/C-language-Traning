#include <stdio.h>

int main()
{
    int n = 5;
    int i,j,x;

    for (i = 0; i < n; i++)
    {
        x =i;
        for (j = 1; j <= n; j++)
        {
        x+=n;
        

         printf("%c ", x - n + 65);
         
        }
        printf("\n");
    }
    return 0;
}