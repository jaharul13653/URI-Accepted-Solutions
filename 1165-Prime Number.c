#include<stdio.h>
int main()
{
    int n,x,i,j,k=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&x);
        for (j=2;j<x;j++)
        {
            if (x%j==0)
            {
                printf("%d nao eh primo\n",x);
                k++;
                break;
                }

        }
        if(k==0)
        {
            printf("%d eh primo\n",x);
        }
        k=0;

    }
    return 0;
}
