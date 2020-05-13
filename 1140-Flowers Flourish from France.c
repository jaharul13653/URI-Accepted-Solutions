#include<stdio.h>
#include<string.h>

int main ()
{
    int i,length,ans=0;
    char str[1000];
    while(1){
    gets(str);
    if(str[0]=='*') break;
    length=strlen(str);
    for(i=0;i<length;i++)
        str[i]=toupper(str[i]);
        for(i=1;i<length;i++)
        {
            if(str[i]==' ')
            {
                ++i;
                if(str[i]!=str[0]) ans++;
            }
        }


    if(ans>0) printf("N\n");
    else printf("Y\n");
    ans=0;
    }



    return 0;
}
