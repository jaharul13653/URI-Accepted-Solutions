#include<stdio.h>
int main ()
{


    int i, a, x=0, y=0, z=0, n=0;
    for (i=1;i<=5;i++)
    {
        scanf("%d",&a);
        if (a%2==0)
        {
            x=x+1;
        }
        if (a%2 != 0)
        {
            y=y+1;
        }
        if (a>0)
        {
            z=z+1;
        }
        if (a<0)
        {
           n=n+1;
        }
            }
    printf("%d valor(es) par(es)\n",x);
    printf("%d valor(es) impar(es)\n",y);
    printf("%d valor(es) positivo(s)\n",z);
    printf("%d valor(es) negativo(s)\n",n);
    return 0;
}
