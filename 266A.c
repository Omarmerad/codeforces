#include<stdio.h>

int main()
{
    int n;
    char s[57];
    scanf("%d", &n);
    getchar();
    int count = n-1;
    fgets(s, sizeof(s), stdin);
    for(int i = 0; i < n-1; i++)
    {
        if(s[i]!=s[i+1])
        {
            count--;
        }
    }
    printf("%d\n", count);
}