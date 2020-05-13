#include<stdio.h>
int main ()
{
    int i, j, x;
    for (i=0;i<10000;i++)
    {
        scanf("%d",&x);
        if(x==0) break;
        else
        {
            for (j=1;j<x;j++)
            {
                printf("%d ",j);
            }
            printf("%d\n",x);
        }
    }
    return 0;
}
