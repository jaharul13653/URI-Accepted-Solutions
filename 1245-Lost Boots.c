#include<stdio.h>

int main()
{
    int N;
    while(scanf("%d", &N)!=EOF)
    {
        int i, j, k, R=0, L=0, sum=0;
        int right[N], left[N];
        for(i=0; i<N; i++)
        {
            int length;
            char ch;
            scanf("%d %c", &length, &ch);
            if(ch=='D')
            {
                right[R]=length;
                R++;
            }
            else if(ch=='E')
            {
                left[L]=length;
                L++;
            }
        }
        for(j=0; j<R; j++)
        {

            for(k=0; k<L; k++)
            {
                if(right[j]==left[k])
                {
                    sum++;
                    left[k]=-1;
                    break;
                }
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
