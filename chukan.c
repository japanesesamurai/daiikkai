#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    int i, x, y, z;
    char b[101];
    printf("パスワードを入力してください：");
    scanf("%s", b); 
    if(8 > strlen(b))
        printf("8文字以上入力してください\n");
    for(i=0;i<strlen(b);i++)
    {
        if(isupper(b[i]))
        x++;
        if(islower(b[i]))
        y++;
        if(isdigit(b[i]))
        z++;
    }
    if(x==0)
        printf("大文字を追加してください\n");
    if(y==0)
        printf("小文字を追加してください\n");
    if(z==0)
        printf("数字を追加してください\n");
    if(x>0 && y>0 && z>0)
        printf("パスワードは強力です\n");
    return 0;
}