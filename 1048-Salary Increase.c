#include<stdio.h>
int main()
{
    float a, x, y;
    scanf("%f", &a);
    if (a <= 400.00 && a>=0.00)
    {
        x = (a*15.00)/100.00;
        printf("Novo salario: %.2f\n",x+a);
        printf("Reajuste ganho: %.2f\n",x);
        printf("Em percentual: 15 %%\n");
    }

    else if (a <= 800.00 && a >= 400.01)
    {
        x = (a*12.00)/100.00;
        printf("Novo salario: %.2f\n",x+a);
        printf("Reajuste ganho: %.2f\n",x);
        printf("Em percentual: 12 %%\n");

    }
    else if (a<=1200.00 && a>=800.01)
    {
        x = (a*10.00)/100.0;
        printf("Novo salario: %.2f\n", x+a);
        printf("Reajuste ganho: %.2f\n",x);
        printf("Em percentual: 10 %%\n");
    }
    else if (a<=2000.00 && a>=1200.01)
    {
        x = (a*7.00)/100.00;
        printf("Novo salario: %.2f\n",x+a);
        printf("Reajuste ganho: %.2f\n",x);
        printf("Em percentual: 7 %%\n");
    }
    else if (a > 2000.00)
    {
        x= (a*4.00)/100.00;
        printf("Novo salario: %.2f\n",x+a);
        printf("Reajuste ganho: %.2f\n",x);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
