#include<stdio.h>
int main()
{
  int i,N;
  scanf("%d",&N);
  for(i=1;i<N;i++)
  {
      if(i==1)
        printf("Ho");
      else
        printf(" Ho");
  }
  if(N==1)
  printf("Ho!\n");
  else
    printf(" Ho!\n");
   return 0;
}
