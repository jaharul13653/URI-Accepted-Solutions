#include<stdio.h>
int main()
{
    long long int farm,i,sum=0,j,count=0;
    scanf("%lld",&farm);
    long long int n[farm];
    for(i=0;i<farm;i++)
        scanf("%lld",&n[i]);
    for(i=0;i<farm;i++)
    {
        if(n[i]%2!=0)
        {
            if(n[i]>0)
                {
                  n[i]-=1;
                  count++;
                }
        }
        else if(n[i]%2==0)
        {
            if(n[i]>0)
                {
                   n[i]-=1;
                   count++;
                }
            for(j=i-1;j>=0;j--)
            {
                if(n[j]>0)
                   n[j]-=1;
            }
            break;
        }
    }
    for(i=0;i<farm;i++)
        sum+=n[i];
    printf("%lld %lld\n",count,sum);
    return 0;
}
