#include<stdio.h>
int main ()
{
    int x, y, z;
    scanf("%d %d %d",  &x, &y, &z);
    if (x<y && y<z)

    {
        printf("%d\n", x);
        printf("%d\n", y);
        printf("%d\n", z);
    }
    else if (y<x && x<z)
    {
        printf("%d\n", y);
        printf("%d\n", x);
        printf("%d\n", z);
    }
    else if (z<x && x<y)
    {
        printf("%d\n", z);
        printf("%d\n", x);
        printf("%d\n", y);
    }
    else if (z<y && y<x)
    {
        printf("%d\n", z);
        printf("%d\n", y);
        printf("%d\n", x);
    }
    else if (x<z && z<y)
    {
        printf("%d\n", x);
        printf("%d\n", z);
        printf("%d\n", y);
    }
    else
    {
        printf("%d\n", y);
        printf("%d\n", z);
        printf("%d\n", x);
    }
    printf("\n");
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    return 0;

}

