#include<stdio.h>

int main ()
{
    int T,a,b,ans;
    char ch;
   scanf("%d",&T);
   while(T--)
   {
       scanf("%d%c%d",&a,&ch,&b);
       if(a==b) ans=a*b;
       else if(ch>=97) ans=a+b;
       else ans=b-a;
       printf("%d\n",ans);
   }
   return 0;
}
