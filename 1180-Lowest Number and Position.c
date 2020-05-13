#include<stdio.h>
int main ()
{
    int n,i,min,count;
    scanf("%d",&n);
    int x[n];
    scanf("%d",&x[0]);
    min=x[0];
    for (i=1;i<n;i++)
    {
        scanf("%d",&x[i]);
        if (min>x[i])
        {
            min=x[i];
            count=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",min,count);
    return 0;
}
