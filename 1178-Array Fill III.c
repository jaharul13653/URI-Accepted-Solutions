#include<stdio.h>
int main ()
{
    int i,j;
    double a, N[100],M[100];
    scanf("%lf",&a);
    printf("N[0] = %.4lf\n",a);
    M[1]=a;
    for (i=1,j=1;i<100;i++)
    {
        N[i]=M[j]/2.0000;
        printf("N[%d] = %.4lf\n",i,N[i]);
        j++;
        M[j]=N[i];

    }
    return 0;

}
