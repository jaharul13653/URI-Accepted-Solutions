#include<stdio.h>
int main ()
{
    int N,i,a;
    int in=0, out=0;
    scanf("%d", &N);
    for (i=0;i<N;i++)
    {
        scanf("%d",&a);
        if (a<=20 && a>=10)
        {
         in=in+1;
        }
        else
        {
            out = out + 1;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
}
