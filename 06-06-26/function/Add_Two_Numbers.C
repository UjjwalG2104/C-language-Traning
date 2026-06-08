#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int total = add(5, 6);

    printf("The total is : %d", total);

    return 0;
}