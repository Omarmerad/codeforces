#include<stdio.h>

int main()
{
    int n, petya, vasya, tonya;
    int count = 0;
    scanf("%d\n", &n);
    while(n--)
    {
        scanf("%d %d %d\n", &petya, &vasya, &tonya);
        if (petya + vasya + tonya > 1)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}