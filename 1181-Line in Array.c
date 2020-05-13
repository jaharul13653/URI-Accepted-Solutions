#include <stdio.h>
int main ()
{
    double d[12] [12], sum=0.0;
    int x, i, j;
    char s[2];
    scanf("%d %s",&x,&s);
    for (i=0;i<12;i++)
        for (j=0;j<12;j++)
        scanf("%lf",&d[i][j]);
    for (i=0;i<12;i++)
        sum+=d[x][i];
    if (!strcmp(s,"S"))
        printf("%.1lf\n",sum);
    else if (!strcmp(s,"M"))
        printf("%.1lf\n",sum/12.0);
    return 0;

}

