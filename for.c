#include <stdio.h>
int main(void)
{
    int total = 0;
    for(int i = 0; i<= 10; i++)
    {
        total += i;
    }
    printf("１から１０までの和は%dです。\n", total);
    
    return 0;
}    