#include <stdio.h>
int main(){
    int a,b,c,d;
    int sta, end;
    while(1)
    {
         scanf("%d %d %d %d",&a,&b,&c,&d);
         if(a == 0 && b == 0 && c == 0 && d == 0) break;
         if(a == 0) sta = 24*60 + b;
         else
         sta = a*60 + b;
         if(c == 0) end = 24*60 + d;
         else
         end= c*60 + d;
         if(end > sta) printf("%d\n", end-sta);
         else
         printf("%d\n", 24*60 - (sta-end));
    }
    return 0;
}
