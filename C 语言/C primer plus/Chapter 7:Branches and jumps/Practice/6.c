//编写一个程序读取输入，直到#，并报告序列ei出现的次数。
//说明：此程序必须要记住前一个字符和当前字符。用诸如“Receive your
//eieio award。”的输入测试它
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  char Pr_ch = 0, Cu_ch;
  int count = 0;
  printf("Please enter your text(enter # to quit)\n");
  while ((Cu_ch = getchar()) != '#') {
    if (Pr_ch == 'e' && Cu_ch == 'i')
      count ++;
    Pr_ch = Cu_ch;
  }
  printf("The number of range 'ei' appears %d\n",count);

  return EXIT_SUCCESS;
}
