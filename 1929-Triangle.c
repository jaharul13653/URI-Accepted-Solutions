#include<stdio.h>
int main()
{
    int n[4], i,j,temp;
    for(i=0;i<4;i++)
        scanf("%d",&n[i]);
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(n[i]>n[j])
            {
                temp=n[i];
                n[i]=n[j];
                n[j]=temp;
            }
        }
    }
    i=n[0]+n[1]; j=n[1]+n[2];
    if(n[2]<i || n[3]<j) printf("S\n");
    else
        printf("N\n");

    return 0;
}
