#include<stdio.h>
int main()
{
    int m,n,i,sum=0,j;
    for (j=0;j<100;j++)
    {
    scanf("%d %d", &m, &n);
    if (m<=0 || n<=0){ break;}
    else if (m>n)
    {
        for(i=n;i<=m;i++)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        printf("Sum=%d\n",sum);
    }
    else if (n>m)
    {
        for(i=m;i<=n;i++)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        printf("Sum=%d\n",sum);
    }
      sum=0;
        }

    return 0;
}
