#include <stdio.h>
int main(void)
{
    int saiki, kouki, hana;
    saiki = 20;
    kouki = 26;
    hana = 22;
    if(saiki == 20)
    {
        printf("さいきは二十歳です.\n");
    }
    if( saiki <= kouki && saiki <= hana)
    {
        printf("さいきとこうきとはなは全員二十歳以上です.\n");
    }
    if(kouki >= 25 && kouki < 30)
    {
        printf("こうきはアラサーです.\n");
    }
    if(kouki > hana && kouki > saiki)
    {
        printf("こうきは最年長です.\n");
    }
    if(kouki < hana && kouki < saiki)
    {
        printf("こうきは最年少です.\n");
    }
    return 0;