#include<stdio.h>
int main()
{
   int a, b, c,sum, H;
   scanf("%d", &a);
   while (a>0)
   {
       scanf("%d %d", &b, &c);
       sum=(a*b*100)/c;
        H=pow(sum,.5);
        printf("%d\n",H);
       scanf("%d", &a);
   }
   return 0;
}
