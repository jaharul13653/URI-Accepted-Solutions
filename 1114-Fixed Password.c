#include<stdio.h>
int main ()
{
   int i, pa, p=2002;
   for(i=0;i<100;i++)
   {
      scanf("%d",&pa);
    if (p==pa)
      {
          printf("Acesso Permitido\n");
          break;
      }
      else if (p!=pa)
      {
          printf("Senha Invalida\n");
      }

   }
  return 0;
}
