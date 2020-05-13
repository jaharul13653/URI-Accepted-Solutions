#include<stdio.h>
int main()
{
    int T;
    char s[20];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s %*d",&s);
        if(!strcmp(s,"Thor")) printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
