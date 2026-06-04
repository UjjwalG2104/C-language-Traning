
#include <stdio.h>

int square(int x);

int main()
{
    int res = square(4);
    printf("%d", res);

    return 0;
}

int square(int x)
{
    return x * x;
}