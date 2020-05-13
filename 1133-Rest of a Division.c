#include<stdio.h>
int main()
{
    int a, b, i, saw;
    scanf("%d %d",&a, &b);

    if (a<b)
    {
        a=a+1;
     for (i=a;i<b;i++)
    {
        if (i%5==2)
        {
            printf("%d\n",i);
        }
        else if (i%5==3){
            printf("%d\n",i);
        }

    }

    }
    else
    {
        saw=a;
        a=b;
        b=saw;
        a=a+1;
         for (i=a;i<b;i++)
    {
         if (i%5==2)
        {
            printf("%d\n",i);
        }
        else if (i%5==3){

            printf("%d\n",i);
        }


    }


    }
    return 0;
}
