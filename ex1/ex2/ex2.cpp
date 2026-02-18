
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    char m[50][50];
    int n = 0;
    scanf("%[^\n]s", s);

    char* p = strtok(s, " ");
    while (p != NULL)
    {
        strcpy(m[n++], p);
        p = strtok(NULL, " ");
    }

    int j, i, li, lj;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
        {
            li = strlen(m[i]);
            lj = strlen(m[j]);
            if (li < lj || li == lj && strcmp(m[i], m[j])>0)
            {
                char aux[50];
                strcpy(aux, m[i]);
                strcpy(m[i], m[j]);
                strcpy(m[j], aux);
            }
        }
    for (int i = 0; i < n; i++)
        printf("%s\n", m[i]);

    return 0;
}


