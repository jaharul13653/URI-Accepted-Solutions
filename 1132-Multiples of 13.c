#include<stdio.h>
int main()
{
    int a, b, sum=0, i, saw;
    scanf("%d %d",&a, &b);
    if (a<b)
    {
     for (i=a;i<=b;i++)
    {
        if (i%13!=0)
        {
            sum=sum+i;
        }

    }
    printf("%d\n",sum);
    }
    else
    {
        saw=a;
        a=b;
        b=saw;
         for (i=a;i<=b;i++)
    {
        if (i%13!=0)
        {
            sum=sum+i;
        }

    }
    printf("%d\n",sum);

    }
    return 0;
}
