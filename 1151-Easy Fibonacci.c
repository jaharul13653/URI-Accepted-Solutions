#include<stdio.h>
int main ()
{
    int i=1, n,f=0,l=1,fibo;
    scanf("%d",&n);
    printf("0");
    while(i<n)
    {
        if (i==1) fibo=i;
        else
        {
            fibo=f+l;
            f=l;
            l=fibo;
        }
        printf(" %d",fibo);
        i++;

    }
    printf("\n");
    return 0;
}
