#include<stdalign.h>
int main ()
{
    float n1, n2, n3, n4, x, y, z;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    x = (n1*2+n2*3+n3*4+n4*1)/10;
    printf("Media: %.1f\n",x);
    if (x>7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (x<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {

            printf("Aluno em exame.\n");


            scanf("%f", &y);


                printf("Nota do exame: %.1f\n",y);

            z = (x+y)/2;

                printf("Aluno aprovado.\n");


                printf("Media final: %.1f\n",z);

        }
        return 0;

    }
