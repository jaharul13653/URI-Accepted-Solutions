#include<stdio.h>
#include<string.h>
int main()
{
    char A[11],B[33];
    int i,j,lengthA,lengthB,lplegth,k,p,T=0;
    while (scanf("%s %s",&A,&B)!=EOF)
        {
        T++;
        printf("Caso #%d:\n",T);
        int count=1,seq=0;
        lengthA=strlen(A);
        lengthB=strlen(B);
        for(i=0;i<lengthB;i++)
           {
              if(A[0]==B[i])
                 {
                     k=i+1;
                     for(j=1;j<lengthA;j++,k++)
                        {
                           if(A[j]==B[k]) ++count;
                           else
                               {
                                  count=1;
                                  break;
                               }
                        }
                    if(count==lengthA)
                      {
                         seq++;
                         count=1;
                      }
                }
         }
    if(seq==0)printf("Nao existe subsequencia\n\n");
    else
      {
         for(i=lengthB-1;i>0;i--)
         {
            j=lengthA-1;
            count=1;
            if(A[j]==B[i])
            {
            for(k=1,p=i-1;k<lengthA;k++,p--)
            {
                j--;
                if(A[j]==B[p])++count;
                else
                    break;
                if(count==lengthA)
                break;
            }
            }
            if(count==lengthA) break;
            }
            if(lengthA==1) ++p;
            printf("Qtd.Subsequencias: %d\nPos: %d\n\n",seq,++p);
        }

        }

    return 0;
}
