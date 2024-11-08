#include <stdio.h>

int main(void)
{
    char x, y;
    printf("小文字を入力してください：\n");
    scanf("%c", &x);
    y = x - ('a'-'A');
    printf("大文字に変換すると %c \n", y);
    return 0;
}