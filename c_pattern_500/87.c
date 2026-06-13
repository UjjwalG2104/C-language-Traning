#include <stdio.h>

int main()
{
    int i, j;

    for(i = 0; i <= 4; i++)
    {
        for(j = 4; j >= i; j--)
        {
            printf("%c ", j + 65);
        }

        printf("\n");
    }

    return 0;
}

//E D C B A 
//E D C B 
//E D C 
//E D 
//E 
