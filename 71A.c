#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char n[6];
    fgets(n,sizeof(n),stdin);
    int a=atoi(n);
    for(int i = 0; i < a; i++)
    {
        char s[107];
        fgets(s, sizeof(s), stdin);
        s[strlen(s) - 1] = 0;
        int l = strlen(s);
        if (l < 11)
        {
            printf("%s\n", s);
        }
        else
        {
            printf("%c", s[0]);
            printf("%i", l-2);
            printf("%c\n", s[l-1]);
        }
    }
    return 0;
}

