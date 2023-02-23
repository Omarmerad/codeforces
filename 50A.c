#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &m, &n);
    int s = m*n;
    if(s == 1)
    {
        printf("0\n");
    }
    else if(s % 2 == 0)
    {
        s = s/2;
        printf("%i\n", s);
    }
    else
    {
        s = (s-1)/2;
        printf("%i", s);
    }
}