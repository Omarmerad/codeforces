#include<stdio.h>
#include<math.h>

int main()
{
    int i ,j, x, y, result;
    int a[5][5];
    for(i=0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    result = abs(x-2)+abs(y-2);
    printf("%d", result);
    return 0;
}