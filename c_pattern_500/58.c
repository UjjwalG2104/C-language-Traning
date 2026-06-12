#include <stdio.h>

int main()
{
    int firstNum, secondNum, result;
    int i, j;
    int n = 5;

    for (i = 1; i <= n; i++)
    {
        firstNum = 0;
        secondNum = 1;

        for (j = 1; j <= i; j++)
        {
            printf("%d ", firstNum);

            result = firstNum + secondNum;
            firstNum = secondNum;
            secondNum = result;
        }

        printf("\n");
    }

    return 0;
}

//0 
//0 1 
//0 1 1 
//0 1 1 2 
//0 1 1 2 3 