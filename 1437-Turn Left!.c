#include<stdio.h>

int main()
{
    while(1)
    {
        int T,i,j,R=0,L=0,ans=0;
        scanf("%d",&T);
        if(T==0) break;
        char str[T];
        scanf("%s",&str);
        for(i=0;i<T;i++)
        {
            if(str[i]=='E') L++;
            else if(str[i]=='D') R++;
        }
        ans=R-L;
        if(ans>=0){
            for(i=0,j=0;i<ans;i++)
                {
                   j++;
                   if(j==4) j=0;
                }
           if(j==0) printf("N\n");
           else if(j==1) printf("L\n");
           else if(j==2) printf("S\n");
           else if(j==3) printf("O\n");
        }
        else
        {
            ans*=-1;
            for(i=0,j=0;i<ans;i++)
            {
                j++;
                if(j==4) j=0;
            }
           if(j==0) printf("N\n");
           else if(j==3) printf("L\n");
           else if(j==2) printf("S\n");
           else if(j==1) printf("O\n");
        }

    }

    return 0;

}
