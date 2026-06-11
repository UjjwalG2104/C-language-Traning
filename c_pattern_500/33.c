#include <stdio.h>

int main()
{
    int n = 5;
    int i,j;
    int x;

    for (i = 1; i <= n; i++)
    {
        x = n - i;
        for (j = 1; j <= n; j++)
        {
       
        

         printf("%c ", x  + 65);
          x = x + n;
         
        }
        printf("\n");
    }
    return 0;
}