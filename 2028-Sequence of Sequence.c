#include<stdio.h>
int main()
{

    int i,j,N,T=0;
    while (scanf("%d",&N)!=EOF)
        {
           j=1;
           ++T;
           for(i=N;i>0;i--)
           {
               j+=i;
           }
           if (N==0)printf("Caso %d: %d numero\n",T,j);
           else printf("Caso %d: %d numeros\n",T,j);
           printf("0");
           for(i=1;i<=N;i++)
              {
                  for(j=1;j<=i;j++)
                      printf(" %d",i);
              }
            printf("\n\n");

        }

    return 0;

}
