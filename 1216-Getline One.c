#include<stdio.h>

int main ()
{
    double count=0.0,sum=0.0,distance;
    while(scanf("%*[^\n]s")!=EOF)
    {
        scanf("%*c%lf%*c",&distance);
        sum+=distance;
        count++;
    }
    printf("%.1lf\n",sum/count);
    return 0;
}
