#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,c,d,e,f,i,sum=0;
    char C[10];
    for(i=1; i<=3; i++)
    {
        sum=0;
        while(1)
        {
            gets(C);
            if(C[0]=='c') break;

            if(C[0]=='-')
            {
                if(C[1]=='-')
                {
                    if(C[2]=='-') sum+=0;
                    else sum+=1;
                }
                else
                {
                    if(C[2]=='-') sum+=2;
                    else sum+=3;
                }
            }
            else if(C[0]=='*')
            {
                if(C[1]=='-')
                {
                    if(C[2]=='-')sum+=4;
                    else sum+=5;
                }
                else
                {
                    if(C[2]=='-') sum+=6;
                    else sum+=7;
                }
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
