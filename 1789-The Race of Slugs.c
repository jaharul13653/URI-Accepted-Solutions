#include<stdio.h>
int main()
{
    int T,i,s;
  while(scanf("%d",&T)!=EOF)
  {
      int a[T];
      for(i=0;i<T;i++)
      {
          scanf("%d",&a[i]);
      }
      for(i=1;i<T;i++)
      {
          if(a[0]<a[i]) a[0]=a[i];
      }
      if(a[0]<10) s=1;
      else if(a[0]>=10 && a[0]<20) s=2;
      else if (a[0]>=20) s=3;
      printf("%d\n",s);
  }
}
