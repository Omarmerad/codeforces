#include<stdio.h>
#include<string.h>

int main()
{
    int k = 1;
    int count = 0;
    char s[107];
    fgets(s, sizeof(s), stdin);
    int l = strlen(s) - 1;
    for(int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if(s[i] == s[j])
            {
                k = 0;
            }
        }
        if(k == 1)
        {
            count++;
        }
        k = 1;
    }
    if(count % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}