#include<stdio.h>
int main ()
{
    int x,i,z;
    scanf("%d",&x);
    z=x*4;
    for (i=1;i<z;i=i+4)
    {
        printf("%d %d %d PUM\n", i, i+1, i+2);
    }
    return 0;

}
