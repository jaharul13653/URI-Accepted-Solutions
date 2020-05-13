#include<stdio.h>
int main()
{
    char a[10], b[10];
    int N,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%s %s",&a,&b);
        if(!strcmp(a,b))
            printf("Caso #%d: De novo!\n",i);
        else if (!strcmp(a,"tesoura")&&!strcmp(b,"papel"))
            printf("Caso #%d: Bazinga!\n",i);
        else if (!strcmp(b,"tesoura")&&!strcmp(a,"papel"))
            printf("Caso #%d: Raj trapaceou!\n",i);
        else if(!strcmp(a,"papel")&&!strcmp(b,"pedra"))
            printf("Caso #%d: Bazinga!\n",i);
        else if(!strcmp(b,"papel")&&!strcmp(a,"pedra"))
            printf("Caso #%d: Raj trapaceou!\n",i);
        else if(!strcmp(a,"pedra")&&!strcmp(b,"lagarto"))
            printf("Caso #%d: Bazinga!\n",i);
        else if(!strcmp(b,"pedra")&&!strcmp(a,"lagarto"))
            printf("Caso #%d: Raj trapaceou!\n",i);
        else if(!strcmp(a,"lagarto")&&!strcmp(b,"Spock"))
            printf("Caso #%d: Bazinga!\n",i);
        else if(!strcmp(b,"lagarto")&&!strcmp(a,"Spock"))
            printf("Caso #%d: Raj trapaceou!\n",i);
        else if(!strcmp(a,"Spock")&&!strcmp(b,"tesoura"))
            printf("Caso #%d: Bazinga!\n",i);
        else if(!strcmp(b,"Spock")&&!strcmp(a,"tesoura"))
            printf("Caso #%d: Raj trapaceou!\n",i); //lagarto tesoura
        else if(!strcmp(a,"tesoura")&&!strcmp(b,"lagarto"))
            printf("Caso #%d: Bazinga!\n",i);
        else if(!strcmp(b,"tesoura")&&!strcmp(a,"lagarto"))
            printf("Caso #%d: Raj trapaceou!\n",i);
        else if(!strcmp(a,"lagarto")&&!strcmp(b,"papel"))
            printf("Caso #%d: Bazinga!\n",i);
        else if(!strcmp(b,"lagarto")&&!strcmp(a,"papel"))
            printf("Caso #%d: Raj trapaceou!\n",i);
        else if(!strcmp(a,"papel")&&!strcmp(b,"Spock"))
            printf("Caso #%d: Bazinga!\n",i);
        else if(!strcmp(b,"papel")&&!strcmp(a,"Spock"))
            printf("Caso #%d: Raj trapaceou!\n",i);
        else if(!strcmp(a,"Spock")&&!strcmp(b,"pedra"))
            printf("Caso #%d: Bazinga!\n",i);
        else if(!strcmp(b,"Spock")&&!strcmp(a,"pedra"))
            printf("Caso #%d: Raj trapaceou!\n",i);
        else if(!strcmp(a,"pedra")&&!strcmp(b,"tesoura"))
            printf("Caso #%d: Bazinga!\n",i);
        else if(!strcmp(b,"pedra")&&!strcmp(a,"tesoura"))
            printf("Caso #%d: Raj trapaceou!\n",i);
    }
    return 0;
}
