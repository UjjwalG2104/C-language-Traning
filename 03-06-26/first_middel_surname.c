#include <stdio.h>

int main()
{
    int i, j, k;

    char fname[10] = "Vishwanath";
    char sname[10] = "Pratap";
    char ename[10] = "Singh";
    char name[30];

    for(i = 0; fname[i] != '\0'; i++)
    {
        name[i] = fname[i];
    }

    name[i] = ' ';

    for(j = 0; sname[j] != '\0'; j++)
    {
        name[i + j + 1] = sname[j];
    }

    name[i + j + 1] = ' ';

    for(k = 0; ename[k] != '\0'; k++)
    {
        name[i + j + k + 2] = ename[k];
    }

    name[i + j + k + 2] = '\0';

    printf("%s\n", name);

    return 0;
}