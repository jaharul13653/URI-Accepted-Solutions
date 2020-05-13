#include<stdio.h>
int main ()
{
    int  i, j, k;
    scanf("%d",&j);

    for (i=1,k=j;i<=j;i++)
    {
        if (j%k==0){
        printf("%d\n",j/k);
    }
    k--;

    }

    return 0;
}
