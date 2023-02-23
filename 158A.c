#include<stdio.h>

int main()
{
    int count = 0;
    int n, k;
    scanf("%d %d", &n, &k);
    int i[107];
    for(int j = 0; j < n; j++)
    {
        scanf("%d", &i[j]);
    }
    for(int s = 1; s < n; s++)
    {
        if(i[s] >= i[k-1] && i[s]<=i[s-1] && i[s]>0)
        {
            count++;
        }
    }
    if (i[0]>0 && i[0] >= i[k-1])
    {
        count ++;
    }
    printf("%i\n", count);
    return 0;
}