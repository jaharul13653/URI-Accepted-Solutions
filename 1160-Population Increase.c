#include<stdio.h>
int main ()
{
    int N, a, b, i, j;
    double a1, b1;
    scanf("%d",&N);


    for (i=0;i<N;i++)
    {
          j=0;
        scanf("%d %d %lf %lf", &a, &b, &a1, &b1);
        while (a<=b){

            a=a+((a*a1)/100);
            b=b+((b*b1)/100);
            j++;

            if (j>=101)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (j<=100)
            {
                printf("%d anos.\n",j);

            }

        }



    return 0;
}
