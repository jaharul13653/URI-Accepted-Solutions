#include<stdio.h>
int main ()
{
    float sum=1, i, j;

    for (i=3,j=2;i<=39;i=i+2)
    {

        sum=sum+(i/j);
        j=j*2;

    }
    printf("%.2f\n",sum);
    return 0;
}
