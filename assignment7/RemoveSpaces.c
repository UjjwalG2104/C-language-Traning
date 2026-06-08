#include <stdio.h>

int main() {
    char str[100], newstr[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && str[i] != '\n') {
            newstr[j] = str[i];
            j++;
        }
    }

    newstr[j] = '\0';

    printf("String Without Spaces = %s", newstr);

    return 0;
}