#include <stdio.h>
int main()
{
    char s1[20], s2[20];
    int i;
    scanf("%s", s2);
    for(i = 0; s2[i] != '\0'; i++)
    {
        s1[i] = s2[i];
    }
    s1[i] = '\0';
    printf("%s", s1);
    return 0;
}
