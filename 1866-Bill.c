#include<stdio.h>
int main()
{
    int T,s;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&s);
        if(s%2==0) printf("0\n");
        else
            printf("1\n");
    }
    return 0;
}
