#include<stdio.h>

int main ()
{
    int T,i,j,temp,time=1;
    scanf("%d",&T);
    int array[T];
    for(i=0;i<T;i++)
        scanf("%d",&array[i]);
    for(i=0;i<T;i++)
    {
        for(j=0;j<T;j++){

        if (array[i]<array[j]) {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }


    for(i=0;i<T;i++)
    {
        if(array[i]==1) continue;
          for(j=i+1;j<T;j++)
          {
            if(array[i]==array[j])
            {
                ++time;
                array[j]=1;
            }
          }
          printf("%d aparece %d vez(es)\n",array[i],time);


        time=1;
    }
    return 0;
}
