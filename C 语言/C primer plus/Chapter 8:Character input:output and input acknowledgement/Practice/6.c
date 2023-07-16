//修改程序清单8.8中的get_first()函数，使其返回所遇到的第一个非空白字符
//在一个简单的程序中测试该函数。
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

char get_first(void){
  char ch; 
  while ((ch = getchar()) != EOF)
  {
    if (!isspace(ch))
      return ch;
  }
  return '\0';
}


int main(int argc, char *argv[])
{
  char ch;
  ch = get_first();
  if (ch != '\0')
  putchar(ch);
  return EXIT_SUCCESS;
}
