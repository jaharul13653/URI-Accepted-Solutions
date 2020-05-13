#include<stdio.h>
int main()
{
    int T,p=0,i,j;
    scanf("%d",&T);
    int N[T];
    for(i=0;i<T;i++)
        {scanf("%d",&N[i]);}
    for(i=1;i<T;i++)
    {
        if(N[0]>N[i])
        {
            N[0]=N[i];
            p=i;
        }
    }

    printf("%d\n",++p);
    return 0;
}
