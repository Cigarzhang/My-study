//设计一个程序，统计从输入到文件结尾为止的字符数。
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  char ch;
  long int count = 0;
  while ((ch = getchar()) != EOF)
    count ++;

  printf("The txt file has %ld characters\n",count);
  return EXIT_SUCCESS;
}
