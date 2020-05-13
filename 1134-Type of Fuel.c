#include<stdio.h>
int main ()
{
    int i, x, a=0, d=0, g=0;
    for (i=0;i<10000;i++)
    {
        scanf("%d", &x);
        if (x==1) a++;
        if (x==2) g++;
        if (x==3) d++;
        if (x==4)
        {
            printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\n",a);
            printf("Gasolina: %d\n",g);
            printf("Diesel: %d\n",d);
            break;
        }
    }

    return 0;
}
