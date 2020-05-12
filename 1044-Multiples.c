#include<stdio.h>
int main ()
{
    int a[1], i;
    for (i=0;i<2;i++)
    {
    scanf("%d",&a[i]);
    }
    if ((a[0]%a[1]==0) || (a[1]%a[0])==0)
    {
        printf("Sao Multiplos\n");
    }
    else
        printf("Nao sao Multiplos\n");
    return 0;
}
