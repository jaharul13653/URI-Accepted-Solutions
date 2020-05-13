#include<stdio.h>
int main ()
{
    int N, i;
    double div, x, y;
    scanf("%d", &N);
    for (i=0;i<N;i++)
    {
        scanf("%lf %lf", &x, &y);
        if (y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            div = x/y;
            printf("%.1lf\n", div);
        }

    }
     return 0;
}
