#include<stdio.h>
int main ()
{
    float sum=1,i;

    for (i=2;i<101;i++)
    {

        sum=sum+(1/i);
    }
    printf("%.2f\n",sum);
    return 0;
}
