//让程序要求用户输入一个大写字母，使用嵌套循环产生像下面这样的金字塔图案：
//    A
//   ABA
//  ABCBA
// ABCDCBA
//ABCDEDCBA
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("请输入一个大写字母");
  char input;
  scanf("%c",&input);
  int rows = input - 'A' + 1;
  for (int i = 0; i < rows; i ++)
  {
    // 处理空格
    for (int j = 0; j < rows - i - 1; j ++)
      printf(" ");
    // 处理左边
    for (int j = 0; j <= i; j ++)
      printf("%c",'A' + j);
    // 处理右边
    for (int j = i - 1; j >=0; j --)
      printf("%c",'A' + j);
    printf("\n");
  }

  return EXIT_SUCCESS;
}
