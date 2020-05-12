#include<stdio.h>
int main ()
{
    double B, C, TOTAL;
    char name;
    scanf("%s %lf %lf",&name, &B, &C);
    TOTAL=(B + ((C*15)/100));
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;

}
