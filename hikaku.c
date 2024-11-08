#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("２つの数字を入力してください：");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        c = a - b;
        printf("%dのほうが%dより%d大きい.\n", a, b, c);
    }
    else if(a < b)
    {
        c = b - a;
        printf("%dのほうが%dより%d大きい.\n", b, a, c);
    }
    else
    {
        printf("%dと%dは等しい.\n", a, b);
    }
    return 0;
}