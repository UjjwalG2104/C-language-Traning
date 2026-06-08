#include <stdio.h>

int add(int a, int b);   // Function Declaration

int main()
{
    int result;
    result = add(5, 7);   // Function Call

    printf("The sum is: %d\n", result);

    return 0;
}

int add(int a, int b)     // Function Definition
{
    return a + b;
}