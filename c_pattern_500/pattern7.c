#include<stdio.h>

int main()
{
    int n=5;
    int row,col;
    int x=1;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            printf("%2d ",x);
            x+=2;
        }
        printf("\n");
    }
    return 0;

}