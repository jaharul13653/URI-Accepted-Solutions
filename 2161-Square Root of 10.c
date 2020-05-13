#include<stdio.h>
int main()
{
    double N, ans=0.0;
    scanf("%lf",&N);
    while(N--)
    {
        ans+=6;
        ans=(1/ans);

    }
    printf("%.10lf\n",ans+3);
    return 0;
}
