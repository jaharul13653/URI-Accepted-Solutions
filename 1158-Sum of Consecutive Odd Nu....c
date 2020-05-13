#include<stdio.h>
int main ()
{
    int N, x, y, i, j, sum;
    scanf("%d",&N);
    for (i=0;i<N;i++)
    {
        scanf("%d %d",&x,&y);
        if (x%2!=0){
        for (j=0;j<y;j++)
        {
                sum=sum+x;
                x=x+2;
        }
        printf("%d\n",sum);
    }
    else {
        x=x+1;
             for (j=0;j<y;j++)
        {
                sum=sum+x;
                x=x+2;
        }
    printf("%d\n",sum);
    }
    sum=0;

    }
    return 0;
}
