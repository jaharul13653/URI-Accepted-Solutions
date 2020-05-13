#include<stdio.h>
int main()
{
    char N[15];
    int i,length;
    scanf("%s",&N);
    length=strlen(N);
    for(i=length-1;i>=0;i--)
        printf("%c",N[i]);
    printf("\n");
    return 0;
}
