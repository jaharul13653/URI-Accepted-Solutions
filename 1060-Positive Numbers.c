#include<stdio.h>
int main ()
{
    double a;
    int i,x=0;
    for (i=1;i<=6;i++)
    {
        scanf("%lf",&a);
        if (a>0) x++;

    }
    printf("%d valores positivos\n",x);
    return 0;
}
