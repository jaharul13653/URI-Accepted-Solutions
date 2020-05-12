#include <stdio.h>
int main()
{
    int st, stm, endt, endtm, sum1, sum2, time, time2;
    scanf("%d %d %d %d", &st, &stm, &endt, &endtm);
    sum1 = (st*60) + stm;
    sum2 = (endt*60) + endtm;
    time = sum2-sum1;
    if (time == 0)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(time<0)
    {
        time2=1440+time;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", time2/60, time2%60);
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", time/60, time%60);

    }
    return 0;
}
