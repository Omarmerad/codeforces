#include<stdio.h>
#include<ctype.h>
 
int main()
{
    char s[1007];
    fgets(s, sizeof(s), stdin);
    if(islower(s[0]))
    {
        s[0] = toupper(s[0]);
    }
    printf("%s\n", s);
}