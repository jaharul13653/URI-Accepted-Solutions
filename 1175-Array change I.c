#include<stdio.h>
int main ()
{
    int A[20];
    int i, j;
    for (i=0;i<20;i++)
    {
        scanf("%d",&A[i]);
    }
    for (j=0,i=19;j<20;j++)
    {
        printf("N[%d] = %d\n",j,A[i]);
        i--;
    }
    return 0;
}
