#include<stdio.h>
int main ()
{
    float x,sum=0,j=0;
    float Ave;
    scanf("%f",&x);
    while (x>0)
    {
        sum=sum+x;
        scanf("%f",&x);
        j++;
    }
    Ave=sum/j;

    printf("%.2f\n",Ave);
    return 0;
}
