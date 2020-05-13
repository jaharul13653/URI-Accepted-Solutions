#include<stdio.h>
int main ()
{
    int x ,y,sum=0, i, j=0;
     do scanf("%d %d", &x, &y);
    while (x>y);

    for (i=x;sum<y;i++){
          sum=sum+i;
        j=j+1;
    }
    printf("%d\n",j);
    return 0;
}
