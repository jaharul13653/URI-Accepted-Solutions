#include<stdio.h>
int main ()
{
    double n;
    int sum, a, b;
    scanf("%lf",&n);
    printf("NOTAS:\n");
    sum = n*100;
    printf("%d nota(s) de R$ 100.00\n",sum/10000);
    b = sum%10000;
    printf("%d nota(s) de R$ 50.00\n",b/5000);
    a = b%5000;
    printf("%d nota(s) de R$ 20.00\n",a/2000);
    b = a%2000;
    printf("%d nota(s) de R$ 10.00\n",b/1000);
    a = b%1000;
    printf("%d nota(s) de R$ 5.00\n",a/500);
    b = a%500;
    printf("%d nota(s) de R$ 2.00\n",b/200);
    printf("MOEDAS:\n");
    a = b%200;
    printf("%d moeda(s) de R$ 1.00\n",a/100);
    b = a%100;
    printf("%d moeda(s) de R$ 0.50\n",b/50);
    a = b%50;
    printf("%d moeda(s) de R$ 0.25\n", a/25);
    b = a%25;
    printf("%d moeda(s) de R$ 0.10\n", b/10);
    a = b%10;
    printf("%d moeda(s) de R$ 0.05\n", a/5);
    b = a%5;
    printf("%d moeda(s) de R$ 0.01\n", b/1);
    return 0;
}
