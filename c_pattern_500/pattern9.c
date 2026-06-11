#include <stdio.h>

int main()
{
    int n = 5;
    int row,col;
    


    for(row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            printf("%2d ", row*col);
            
        }
        printf("\n");

    }
    return 0;



}