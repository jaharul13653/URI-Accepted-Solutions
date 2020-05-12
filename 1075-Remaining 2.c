#include<stdio.h>
int main ()
{
    int N,i,sum;
    scanf("%d",&N);
    for (i=0;i<10000;i++)
    {
        if (i%N==0)
        {
            sum=i+2;
            printf("%d\n",sum);
        }
    }
    return 0;
}
