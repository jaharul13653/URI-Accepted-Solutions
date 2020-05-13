#include<stdio.h>
int main()
{
    int p,n,i,x1,x2,a,b=0;
    scanf("%d",&p);
    scanf("%d",&n);
        int ar[n];
        for(i = 0;i < n;i++){
            scanf("%d",&ar[i]);
        }
        for(i = 1;i < n;i++){
            a=ar[i]-ar[i-1];
            if(a<0)a*=-1;
            if(a>p){
                b=1;
                break;
            }
        }
        if(b==1)printf("GAME OVER\n");
        else printf("YOU WIN\n");

    return 0;
}
