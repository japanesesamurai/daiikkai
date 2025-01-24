#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_STAT 20
int main(void)
{
    srand(time(0));
    int m = rand() % 11, i = rand() % (20 - m), s = 20 - m - i;
    if (m > s && m > i)
      printf("class:mage\n");
    if (s > m && s > i)
      printf("class:knight\n");
    if (i > s && i > m)
      printf("class:thief\n");
    
    printf("intelligence:%d, stamina:%d, charisma:%d\n", m, s, i);
    return 0;
}