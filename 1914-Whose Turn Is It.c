#include<stdio.h>
int main()
{
    int T, x, y;
    char A[100], B[100],R1[7], R[7];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s %s %s %s", A, R, B, R1);
        scanf("%d %d", &x, &y);
        if((x+y)%2==0)
        {
            if(!strcmp(R,"PAR")) printf("%s\n",A);
            else
                printf("%s\n",B);
        }
        else
        {
            if(!strcmp(R,"IMPAR")) printf("%s\n",A);
            else
                printf("%s\n",B);
        }

    }
    return 0;
}
