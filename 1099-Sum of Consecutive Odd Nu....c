#include<stdio.h>
int main()
{
    int N, i, x, y, j, k, sum=0,sum1=0;
    scanf("%d",&N);
    for (i=0;i<N;i++)
    {
        scanf("%d %d", &x, &y);
        if (x==y+1 || y==x+1)
        {
            printf("0\n");
        }
        else if (x==y)
        {
            printf("0\n");
        }
        else if (x>y)
        {
            y=y+1;
            for (j=y;j<x;j++)
            {
                if (j%2!=0)
                {
                    sum=sum+j;
                }
            }
            printf("%d\n",sum);
        }
        else if (y>x)
        {
            x=x+1;
            for (k=x;k<y;k++)
            {
                if (k%2!=0)
                {
                    sum1=sum1+k;
                }
            }
            printf("%d\n",sum1);
        }
        sum=0;
        sum1=0;
    }
    return 0;
}
