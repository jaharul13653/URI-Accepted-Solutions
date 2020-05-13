#include<stdio.h>
int main()
{
    char A[40]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    int N,i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        printf("%c",A[i]);
    printf("\n");
    return 0;
}
