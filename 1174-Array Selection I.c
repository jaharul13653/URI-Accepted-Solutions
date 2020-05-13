#include<stdio.h>
int main ()
{
    double A[100];
    int i, j;
    for (i=0;i<100;i++)
    {
        scanf("%lf",&A[i]);
    }
    for (j=0,i=0;j<100;j++)
    {
        if (A[i]<=10.01)
        {
            printf("A[%d] = %.1lf\n",j,A[i]);
        }
        i++;
    }
    return 0;
}
