#include <stdio.h>

int main()
{
    int a, b, c;
    printf("How many students?");
    scanf("%d", &a);
    printf("How many professors?");
    scanf("%d", &b);
    c = a + b;
    printf("The number of people is %d \n", c);
    return 0;
}