#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[len] != '\0')
        len++;

    printf("Reverse String = ");

    for(i = len - 2; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}