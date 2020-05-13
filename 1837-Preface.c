#include<stdio.h>
int main()
{
  int X,Y,f,i,l;
  scanf("%d %d",&X,&Y);
  if(X<0)
  {
      l=Y;
      if(Y<0) l=Y*-1;
      for(i=0;i<l;i++)
      {
          f=X-i;
          if(f%Y==0) break;
      }

      printf("%d %d\n",(f/Y),i);
  }
  else
  {
      i=X%Y;
      printf("%d %d\n",(X/Y),i);
  }
  return 0;
}
