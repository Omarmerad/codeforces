#include<stdio.h>

int main()
{
    int count = 0;
    int n,i;
    char s[5];
    scanf("%d", &n);
    while(n--)
    {
        scanf("%s", s);
        if (s[0] == '+' || s[2] == '+')
        {
            count++;
        }
        else if (s[0] == '-' || s[2] == '-')
        {
            count--;
        }
    }
    printf("%i\n", count);
    return 0;
}