#include<stdio.h>
int main ()
{

    double a, sum=0, y;
    int i,x=0;
    for (i=1;i<=6;i++)
    {
        scanf("%lf",&a);
        if (a>0)
        {
            x=x+1;
            sum=sum+a;
        }

    }
    y=sum/x;
    printf("%d valores positivos\n",x);
    printf("%.1lf\n",y);
    return 0;
}
