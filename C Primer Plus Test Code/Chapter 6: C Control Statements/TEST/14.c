//编写一个程序读入一行输入,然后反向发音该行。您可以把输入存储在一个
//char数组中;假定该行不超过255个字符。回忆一下，您可以使用具有%c说明
//符的scanf()中一次读入一个字符,而且当你按下回车键时会产生换行符(\n)
#include <stdlib.h>
#include <stdio.h>

const int N = 255;
int main(int argc, char *argv[])
{
  char ch[N + 1];//开辟额外空间存储null字符。
  int i;
  char c;
  printf("请输入字符：\n");
  //读取输入字符，直到换行或者字符满
  while ((scanf("%c",&c) == 1) && (c != '\n') && i < N)
  {
    ch[i] = c;
    i ++;
  }
  ch[i] = '\0';//结束字符标志。
  //逆向输出
  printf("反向输出的字符如下：\n");
  for(int j = i - 1; j >= 0; j --)
     printf("%c",ch[j]);

  return EXIT_SUCCESS;
}
