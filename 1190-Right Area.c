#include <stdio.h>
int main ()
{
    double d[12] [12], sum=0.0;
    int i, j,n=11,m=7;
    char s[2];
    scanf("%s",&s);
    for (i=0;i<12;i++)
        for (j=0;j<12;j++)
        scanf("%lf",&d[i][j]);
    for (i=1;i<11;i++)
        {
        if(i<=5)
        {
            for(j=11; j>=n;j--)
                sum+=d[i][j];
        n--;
        }
        else if(i>=6)
        {
        for(j=m; j<12; j++)
            sum+=d[i][j];
        m++;
        }

        }
    if (!strcmp(s,"S"))
        printf("%.1lf\n",sum);
    else if (!strcmp(s,"M"))
        printf("%.1lf\n",sum/30.0);
    return 0;

}
