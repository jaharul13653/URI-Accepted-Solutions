#include<stdio.h>
int main()
{
    int T, a, b;
    while (1)
    {
        int oh=0, children=0;
        scanf("%d",&T);
        if(T==0) break;
        while(T--)
        {
            scanf("%d%d",&a,&b);
            if(a>b) oh++;
            else if(b>a) children++;

        }
        printf("%d %d\n",oh,children);
    }
    return 0;


}
