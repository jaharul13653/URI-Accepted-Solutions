#include<stdio.h>
int main()
{
    int n,i,l,j,s;
  while(scanf("%d",&n)!=EOF)
  {
      int A[n][n];
      for(i=0;i<n;i++)
         for(j=0;j<n;j++)
           A[i][j]=0;
      for(i=0,j=0;i<n;i++,j++)
        A[i][j]=2;
      for(i=0,j=n-1;i<n;i++,j--)
        A[i][j]=3;
        l=n/3;
        s=n/2;
        for(i=l;i<n-l;i++)
        {
           for(j=l;j<n-l;j++)
            A[i][j]=1;
        }

      A[s][s]=4;
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
            printf("%d",A[i][j]);
         printf("\n");
     }
     printf("\n");

  }
  return 0;
}
