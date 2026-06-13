#include <stdio.h>

int main()
{
    int n = 5;
    int i, j;

    for(i = n; i >= 1; i--)
    {
        for(j = 0; j < i; j++)
        {
            printf("%2d ", j % 2);
        }

        printf("\n");
    }

    return 0;
}


 //0  1  0  1  0 
 //0  1  0  1 
 //0  1  0 
 //0  1 
 //0 
