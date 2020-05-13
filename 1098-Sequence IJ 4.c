#include <stdio.h>
int main()
{
    printf("I=0 J=1\n");
    printf("I=0 J=2\n");
    printf("I=0 J=3\n");
    int i;
    float j=1.2,I=0;
    for(i = 0;i<4;i=i+1)
    {
        I=I+0.2;
        printf("I=%.1f J=%.1f\n",I,j);
        j=j+1;
        printf("I=%.1f J=%.1f\n",I,j);
        j=j+1;
        printf("I=%.1f J=%.1f\n",I,j);

        j=(j-2)+.2;
    }
    printf("I=1 J=2\n");
    printf("I=1 J=3\n");
    printf("I=1 J=4\n");
    I=I+.2;
    j=j+.2;
    for(i = 0;i<4;i=i+1)
    {
        I=I+0.2;
        printf("I=%.1f J=%.1f\n",I,j);
        j=j+1;
        printf("I=%.1f J=%.1f\n",I,j);
        j=j+1;
        printf("I=%.1f J=%.1f\n",I,j);

        j=(j-2)+.2;
    }
    printf("I=2 J=3\n");
    printf("I=2 J=4\n");
    printf("I=2 J=5\n");
    return 0;
}
