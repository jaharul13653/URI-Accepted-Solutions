#include<stdio.h>
int main()
{
    int T, a;
    while (1)
    {
        scanf("%d",&T);
        if(T==0) break;
        int mary=0, jhon=0;
        while(T--)
        {
            scanf("%d",&a);
            if(a==0) mary++;
            else if(a==1) jhon++;
        }
        printf("Mary won %d times and John won %d times\n",mary,jhon);
    }
    return 0;


}
