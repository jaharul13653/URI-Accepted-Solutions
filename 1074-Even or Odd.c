#include<stdio.h>
int main ()
{
    int N,i,x;
    scanf("%d",&N);
    for (i=0;i<N;i++)
    {
        scanf("%d",&x);
        if (x==0)
        {
            printf("NULL\n");
        }
        else if (x%2==0 && x<0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if (x%2==0 && x>0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if (x%2!=0 && x<0)
        {
            printf("ODD NEGATIVE\n");
        }
        else if (x%2!=0 && x>0)
        {
            printf("ODD POSITIVE\n");
        }
    }
    return 0;
}
