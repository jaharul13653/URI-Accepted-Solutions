#include<stdio.h>
int main ()
{
    int x,i,y,j,sum;
    scanf("%d %d",&x,&y);



    for (i=1;i<=y;i=i+x)
    {
        printf("%d",i);
        for (j=1;j<x;j++)
        {
            sum=i+j;
            if (sum<=y){

                        printf(" %d",sum);
                    }


            }
            printf("\n");
        }


    return 0;

}
