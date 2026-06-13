#include <stdio.h>

int main()
{
    int n=5 , x =1;
    int i, j;

    for (i = n ; i >=1;i--)
    {
        for (j =1 ; j <=n ; j++)
        {
            if (i <= j)
            {
                printf("%d",x);
                x+=2;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}


//    1
//   35
//  7911
// 13151719
//2123252729