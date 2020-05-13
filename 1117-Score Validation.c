#include<stdio.h>
int main ()
{
    int i, j;
    float x, y, sum;
    for (i=0;i<100;i++)
    {
        scanf("%f", &x);
        if (x<=10.0 && x>=0)
        {
            for (j=0;j<100;j++)
            {
                scanf("%f", &y);
                if (y<=10.0 && y>=0)
                {

                    sum=x+y;
                    printf("media = %.2f\n",sum/2);
                     break;
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
