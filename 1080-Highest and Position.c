#include<stdio.h>
int main ()
{
    int a, i, max = -1, j;
    for (i=1;i<101;i++)
    {
        scanf("%d", &a);
        if (max<a)
        {
        max=a;
        j=i;
        }
    }
    printf("%d\n",max);
    printf("%d\n",j);
    return 0;
}
