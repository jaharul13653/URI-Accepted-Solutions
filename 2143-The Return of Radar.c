#include<stdio.h>
int BADREV(int X)
{
    if(X%2==0)
        return ((X*2)-2);
    else
    return ((X*2)-1);

}


int main()
{
   int T,i, X,ans;
   scanf("%d",&T);
   while(1)
   {
       if(T==0) break;
       else
       for(i=0;i<T;i++)
       {
           scanf("%d",&X);
           ans= BADREV(X);
           printf("%d\n",ans);

       }
       scanf("%d",&T);

   }
   return 0;
}
