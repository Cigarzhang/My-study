// ANSI C有一系列标准的函数可以用来分析字符;ctype.h头文件包含了这些函数原型
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
  char ch;

  while ((ch = getchar()) != '\n')
  {
    if (isalpha(ch))
      putchar (ch + 1);
    else 
      putchar(ch);
  }
  putchar(ch);

  return EXIT_SUCCESS;
}
