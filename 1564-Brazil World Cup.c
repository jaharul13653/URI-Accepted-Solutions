#include<stdio.h>
int main()
{
  int N;
  while(scanf("%d",&N)!=EOF)
  {
      if(N>0 && N<101)
        printf("vai ter duas!\n");
      else
        printf("vai ter copa!\n");
  }
   return 0;
}
