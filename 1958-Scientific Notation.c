#include <stdio.h>
int main()
{
    long double a;
    char s[120];
    scanf("%Lf", &a);
    sprintf(s,"%LE", a);
    if(s[0]!='-') printf("+");
    printf("%.4LE\n", a);
    return 0;
}
