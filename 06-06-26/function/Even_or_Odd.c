#include <stdio.h>

void check(int n)
{
    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

int main()
{
    check(7);
    return 0;
}