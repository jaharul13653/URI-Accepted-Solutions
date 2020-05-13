#include <stdio.h>
int main()
{
    int i,j=5;
    for(i = 1;i<10;i=i+2)
    {
        j=j+2;
        printf("I=%d J=%d\n",i,j);
        j=j-1;
        printf("I=%d J=%d\n",i,j);
        j=j-1;
        printf("I=%d J=%d\n",i,j);
        j=j+2;
    }
    return 0;
}
