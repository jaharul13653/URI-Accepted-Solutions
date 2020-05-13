#include<stdio.h>
int main()
{
    int n,i,j;
    while(scanf("%d",&n)!=EOF)
    {
        int A[n][n];
        for (i=0;i<n;i++)
            for(j=0;j<n;j++)
            A[i][j]=3;
        for(i=0,j=0;i<n;i++,j++)
            A[i][j]=1;
        for(i=0,j=n-1;i<n;i++,j--)
            A[i][j]=2;
         for (i=0;i<n;i++)
        {
          for (j=0;j<n;j++)
            {
         printf("%d",A[i][j]);
          }
        printf("\n");
        }
    }
}
