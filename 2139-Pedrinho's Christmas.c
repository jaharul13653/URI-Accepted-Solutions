#include<stdio.h>
int main()
{
    int months,days,ans;
    while(scanf("%d %d",&months,&days)!=EOF)
    {
        if(months==1) ans=360-days;
        if(months==2) ans=360-days-31;
        if(months==3) ans=360-days-31-29;
        if(months==4) ans=360-days-31-29-31;

        if(months==5) ans=360-days-31-29-31-30;

        if(months==6) ans=360-days-31-29-31-30-31;

        if(months==7) ans=360-days-31-29-31-30-31-30;

        if(months==8) ans=360-days-31-29-31-30-31-30-31;

         if(months==9) ans=360-days-31-29-31-30-31-30-31-31;

         if(months==10) ans=360-days-31-29-31-30-31-30-31-31-30;

         if(months==11) ans=360-days-31-29-31-30-31-30-31-31-30-31;

        if(months==12)
        {
            ans=25-days;
            if(ans>0) printf("E vespera de natal!\n");
            else if (ans<0) printf("Ja passou!\n");
            if(ans==0) printf("E natal!\n");
        }
        else
            printf("Faltam %d dias para o natal!\n",ans);
    }
    return 0;
}
