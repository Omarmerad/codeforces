#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int count1 = 0;
    int count2 = 0;
    char s[107];
    char f[107];
    fgets(s, sizeof(s), stdin);
    fgets(f, sizeof(f), stdin);
    int ls = strlen(s);
    int lf = strlen(f);
    for( int j =0; j < ls; j++)
    {
        if (isalpha(s[j]))
        {
            if(isupper(s[j]))
            {
                s[j] = tolower(s[j]);
            }
            count1 += s[j];
        }  
    }
    for(int i = 0; i < lf; i++)
    {
        if(isalpha(f[i]))
        {
            if(isupper(f[i]))
            {
                f[i] = tolower(f[i]);
            }
        count2 += f[i];
        }
    }
    printf("%d\n", strcmp(s, f));
}