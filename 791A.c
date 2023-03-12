#include<stdio.h>

int main()
{
    int a, b, i, count;
    scanf("%d %d", &a,&b);
    for(i = 0; a<b+1; i++)
    {
        a = a*3;
        b = b*2;
    }
    printf("%d\n", i);
    return 0;
}