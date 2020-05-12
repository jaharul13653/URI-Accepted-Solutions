#include<stdio.h>
int main()
{
    int N, a, b, c, d;
    scanf("%d",&N);
    a = N/365;
    printf("%d ano(s)\n",a);
    b = N%365;
    c = b/30 ;
    printf("%d mes(es)\n", c);
    d = b%30;
    printf("%d dia(s)\n", d);
    return 0;
}
