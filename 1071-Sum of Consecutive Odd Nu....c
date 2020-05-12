#include <stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d %d", &a, &b);
    if(a==b)
        printf("%d\n",c);
    else if(a<b)
    {
        for(a=a+1;a<b;a++)
        {
            if(a%2!=0)
            {
                c=c+a;
            }
        }
        printf("%d\n",c);
    }
    else
    {
        for(b=b+1;b<a;b++)
        {
            if(b%2!=0)
            {
                c=c+b;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
