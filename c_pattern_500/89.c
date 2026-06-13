#include <stdio.h>

int main()
{
    int i, j;

    for(i = 4; i >= 0; i--)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%c ", j + 65);
        }

        printf("\n");
    }

    return 0;
}


//A B C D E
//A B C D
//A B C
//A B