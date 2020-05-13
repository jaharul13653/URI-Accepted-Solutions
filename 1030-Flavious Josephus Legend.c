#include<stdio.h>

long long int math(int p,int s)
{
    if(p==1)
        return 1;
    else
        return (math(p-1,s)+s-1)%p+1;
}
int main()
{
    int T, p, s,i=0;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&p,&s);
        printf("Case %d: %lld\n",++i,math(p,s));
    }
    return 0;
}
