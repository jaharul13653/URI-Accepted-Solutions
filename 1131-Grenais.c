#include<stdio.h>
int main ()
{
    int x, y,i=0,g=0,d=0,a,fuck=0;
    Shanto:
    scanf("%d %d", &x, &y);
    fuck++;
    printf("Novo grenal (1-sim 2-nao)\n");
    if (x>y) i++;
    else if (x<y)
        g++;
    else
        d++;
    scanf("%d",&a);
    if (a==1)
        goto Shanto;
    else if (a==2)
    {
        printf("%d grenais\n",fuck);
        printf("Inter:%d\n",i);
        printf("Gremio:%d\n",g);
        printf("Empates:%d\n",d);
        printf("Inter venceu mais\n");
    }

     return 0;

}
