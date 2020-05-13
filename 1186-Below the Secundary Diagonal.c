#include <stdio.h>
int main ()
{
    double d[12] [12], sum=0.0;
    int i, j,n=11;
    char s[2];
    scanf("%s",&s);
    for (i=0;i<12;i++)
        for (j=0;j<12;j++)
        scanf("%lf",&d[i][j]);
    for (i=1;i<=11;i++)
        {
        for (j=0;j<12;j++){
            if (j>=n)
            sum+=d[i][j];
        }
        n--;
        }

    if (!strcmp(s,"S"))
        printf("%.1lf\n",sum);
    else if (!strcmp(s,"M"))
        printf("%.1lf\n",sum/66.0);
    return 0;

}
