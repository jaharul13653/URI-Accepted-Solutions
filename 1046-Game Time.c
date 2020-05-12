#include<stdio.h>
int main ()
{
    int a[4];
    scanf("%d %d", &a[0], &a[1]);
    if (a[0]==a[1])
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if (a[2]=a[1]-a[0])
    {
        if (a[2]<0)
        {
            a[3]=24+a[2];
            printf("O JOGO DUROU %d HORA(S)\n",a[3]);
        }
        else
            printf("O JOGO DUROU %d HORA(S)\n",a[2]);
    }
    return 0;
}
