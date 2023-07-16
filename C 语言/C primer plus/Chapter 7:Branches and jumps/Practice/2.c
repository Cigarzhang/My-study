//编写一个程序。该程序读取输入直到遇到#字符。使程序打印每个输入的字符以及它的十进制
//ASCII编码。每行打印8个字符/编码对。建议：利用字符计数和模运算符在每八个循环周期打
//印一个换行符
#include <stdlib.h>
#include <stdio.h>
#define max_ch 8
int main(int argc, char *argv[])
{
  char ch;

  int ch_cnt = 0;
  printf("Please enter some characters:\n");
  while ((ch = getchar()) != '#')
  {
    int ascii_value = ch;
    if(ch_cnt % max_ch == 0 && ch_cnt != 0)
      printf("\n");

    printf("%c-%d",ch,ascii_value);
    ch_cnt ++;
  }
   
  return EXIT_SUCCESS;
}
