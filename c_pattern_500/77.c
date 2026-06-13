#include <stdio.h>

int main ()
{
    int i, j , k = 1;
    int n = 5;

    for(i = n; i >= 1; i--)
    {
        for(j = 1; j <= i ; j++)
        {
            printf("%2d", k++);
        }
        printf("\n");
    }



    return 0;
}



 //1 2 3 4 5
 //6 7 8 9
//101112
//1314
//15
