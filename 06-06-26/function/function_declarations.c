#include <stdio.h>

void greet();
void printSquare(int);
int getNumber();
int add(int, int);

int main()
{
    int result;

    greet();

    result = add(10, 6);
    printf("%d\n", result);

    result = getNumber();
    printf("%d\n", result);

    printSquare(8);

    return 0;
}

void greet()
{
    printf("Hello, user!\n");
}

void printSquare(int num)
{
    printf("%d\n", num * num);
}

int getNumber()
{
    return 10;
}

int add(int a, int b)
{
    return a + b;
}