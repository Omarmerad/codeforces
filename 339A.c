#include<stdio.h>
#include<string.h>

int main()
{
    char s[107];
    char k[107];
    fgets(s, sizeof(s), stdin);
    int l = strlen(s);
    for(int i = 0; i < l; i+=2)
    {
        k[i/2] = s[i] - '0';
    }
    int temp;

    for (int j = 0; j < l/2; j++)
    {
        for(int b = 0; b < (l/2)-1-j; b++)
        {
            if(k[b] > k[b+1])
            {
                temp = k[b];
                k[b] = k[b+1];
                k[b+1] = temp;
            }
        }
    }
    for(int v = 0; v < l/2 - 1; v++)
    {
        printf("%d+", k[v]);
    }
    printf("%d\n", k[l/2 - 1]);
}