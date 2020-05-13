#include<stdio.h>
int main ()
{
    int N, sum=0, i;
    while (1)
    {
        scanf("%d",&N);
        if (N==0) break;
    else if (N%2==0)
     {
         for (i=0;i<5;i++)
         {
             sum=sum+N;
             N=N+2;
         }
         printf("%d\n",sum);
     }
     else {
        N=N+1;
        for (i=0;i<5;i++)
         {
             sum=sum+N;
             N=N+2;
         }
         printf("%d\n",sum);

     }
     sum=0;

    }
    return 0;
}
