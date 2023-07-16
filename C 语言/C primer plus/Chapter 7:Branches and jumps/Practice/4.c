//利用if else语句编写程序读取输入，直到#。用一个感叹号代替每个句号，将原有的每个感到好用两个感叹号代替
//最后报告尽心了多少次替代
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  char ch;
  int count = 0;
  printf("Please enter some characters (enter # to quit)\n");
  while ((ch = getchar()) && ch != '#')
  {
    if (ch == '.')
    {
      putchar('!');
      count ++;
    }
    else if (ch == '!')
    {
      putchar('!');
      putchar('!');
      count ++;
    }
  
    else
    {
      putchar(ch);
    }
  }
  printf("\n");
  printf("It has %d changes\n",count);
  return EXIT_SUCCESS;
}
