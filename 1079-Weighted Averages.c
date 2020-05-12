#include<stdio.h>
int main ()
{
    float N, a, b, c, ave;
    int i;
    scanf("%f", &N);
    for(i=0;i<N;i++)
    {
        scanf("%f %f  %f", &a, &b, &c);
        ave = (a*2+b*3+c*5) / 10.0;
        printf("%.1f\n",ave);
    }
    return 0;
}
