#include <stdio.h>
int main()
{
    int n=4;

    int i, j;

    int x=1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <=  i ; j++)
        {
            printf("%3d", x * i);
            x++;
        }
        printf("\n");
    }
    return 0;
}
 // 1
 // 4  6
 // 12 15 18
 // 28 32 36 40