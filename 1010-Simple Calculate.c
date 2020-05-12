#include<stdio.h>
int main()
{
    int A, B;
    float C;
    int D, E;
    float F;
    float VALOR;
    scanf("%d %d %f", &A, &B, &C);
    scanf("%d %d %f", &D, &E, &F);
    VALOR =(C*B) + (F*E);
    printf("VALOR A PAGAR: R$ %.2f\n", VALOR);
    return 0 ;
}
