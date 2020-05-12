#include<stdio.h>
int main()
{
    int n, a, b;
    scanf("%d",&n);
    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", n/100);
    a = n%100 ;
    printf("%d nota(s) de R$ 50,00\n", a/50);
    b = a%50 ;
    printf("%d nota(s) de R$ 20,00\n", b/20);
    a = b%20 ;
    printf("%d nota(s) de R$ 10,00\n", a/10);
    b = a%10 ;
    printf("%d nota(s) de R$ 5,00\n", b/5);
    a = b%5 ;
    printf("%d nota(s) de R$ 2,00\n", a/2);
    b = a%2 ;
    printf("%d nota(s) de R$ 1,00\n", b/1);
    return 0;
}
