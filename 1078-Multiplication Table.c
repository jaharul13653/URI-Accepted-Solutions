#include<stdio.h>
int main ()
{
    int N, i, multi;
    scanf("%d",&N);
    for (i=1;i<11;i++)
    {
       multi = i*N;
       printf("%d x %d = %d\n", i, N, multi);
    }

    return 0;
}
