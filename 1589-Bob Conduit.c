#include<stdio.h>
int main()
{
  int i,T,r1,r2;
  scanf("%d",&T);
  for(i=0;i<T;i++)
  {
      scanf("%d %d",&r1,&r2);
      printf("%d\n",r2+r1);
  }
   return 0;
}
