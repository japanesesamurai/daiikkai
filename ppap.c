#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
  int a, c;
  srand(time(0));
  int b = (rand() % 100) + 1 ;
  while(a!=b){
    printf("数字を予想してください\n");
    scanf("%d", &a);
    c = a - b;
    if(c>=50){
      printf("高すぎます\n");
    }
    else if(c>0 && c < 50){
      printf("少し高いです\n");
    }
    else if(c<=-50){
      printf("低すぎます\n");
    }
    else if(c<0 && c>-50){
      printf("少し低いです\n");
    }
  }
  printf("正解です\n");
}
     
   
