#include<stdio.h>
int main ()
{
    int i, j,z;
    float x, y, sum;

    for (i=0;i<10000;i++)
    {
        again:

        scanf("%f", &x);
        if (x<=10.0 && x>=0)
        {
            for (j=0;j<10000;j++)
            {
                scanf("%f", &y);
                if (y<=10.0 && y>=0)
                {

                    sum=x+y;
                    printf("media = %.2f\n",sum/2);
                    fuck:
                     printf("novo calculo (1-sim 2-nao)\n");
                     scanf("%d",&z);
                     if (z==1)
                     {
                         goto again;
                     }
                     else if (z==2)
                     {
                         break;
                     }
                     else
                     {
                         goto fuck;
                     }
                }
                else {

            printf("nota invalida\n");

            }
            }
             break;

        }
        else
        {
            printf("nota invalida\n");
        }
    }
    return 0;
}
