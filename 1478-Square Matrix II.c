#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    while(n>0)
    {
        int A[n][n];
        for(i=0;i<n;i++)
        {
            l=2;
            k=i+1;
            for(j=0;j<=i;j++,k--)
            A[i][j]=k;
            for(j=i+1;j<n;j++,l++)
            A[i][j]=l;

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
