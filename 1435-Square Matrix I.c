#include<stdio.h>
int main()
{
    int n, A,i,j,k,l,a,b;
    scanf("%d",&n);
    while(n>0)
    {
        int A [n] [n];
        l=n/2;
        if(n%2!=0)l++;
        b=n-1;
        a=0;
        for (k=1;k<=l;k++)
        {

           for(i=a;i<=b;i++)
            {
            for(j=a;j<=b;j++)
            A[i][j]=k;
            }
           a++;
           b--;
        }
        for (i=0;i<n;i++)
        {
          for (j=0;j<n;j++)
            {
         if (j==0)printf("%3d",A[i][j]);
         else printf(" %3d",A[i][j]);
          }
        printf("\n");
        }
        printf("\n");
        scanf("%d",&n);
    }
    return 0;
}
