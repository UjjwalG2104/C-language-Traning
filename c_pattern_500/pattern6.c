#include<stdio.h>

int main()
{
    int n=5,k=1;
    int row,col;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            printf("%2d ",k++);
        }
        printf("\n");
    }
    return 0;
}