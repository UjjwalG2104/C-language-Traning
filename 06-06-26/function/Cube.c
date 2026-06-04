#include <stdio.h>

int cube(int n)
{
    return n * n * n;
}

int main()
{
    printf("%d", cube(3));
    return 0;
}