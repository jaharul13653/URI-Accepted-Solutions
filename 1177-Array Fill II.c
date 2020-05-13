#include<stdio.h>
int main ()
{
    int i, j,a, N[1000];
    scanf("%d",&a);
    for (i=0,j=0;i<1000;i++)
    {
        if (j<a)
        {

            printf("N[%d] = %d\n",i,j);
        }
        else
        {
            j=0;
            printf("N[%d] = %d\n",i,j);
        }
        j++;
    }
    return 0;

}
