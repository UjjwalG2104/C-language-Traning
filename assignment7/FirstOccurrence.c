#include <stdio.h>

int main() {
    char str[100], ch;
    int i, pos = -1;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter character: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            pos = i;
            break;
        }
    }

    if(pos == -1)
        printf("Character Not Found");
    else
        printf("First Occurrence Position = %d", pos + 1);

    return 0;
}