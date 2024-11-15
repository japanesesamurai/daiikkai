#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("定数a,bをそれぞれ入力してください：");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        c = a - b;
        printf("a=%dのほうがb=%dより%d大きい.\n", a, b, c);
    }
    else if(a < b)
    {
        c = b - a;
        printf("b=%dのほうがa=%dより%d大きい.\n", b, a, c);
    }
    else
    {
        printf("二つの数字a,bは等しい.\n", a, b);
    }
    return 0;
}