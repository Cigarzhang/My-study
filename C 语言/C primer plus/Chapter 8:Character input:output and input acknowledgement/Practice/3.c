//编写一个程序，把输入作为字符流读取，直到遇到EOF。令其报告输入中的大写字母
//个数和小写字母个数。假设小写字母的个数是连续的，大写字母也是如此。或者你
//可以使用ctype.h系列中合适的函数来区分大小写。
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
  char ch;
  int upper_count = 0;
  int lower_count = 0;
  while ((ch = getchar()) != EOF)
  {
    if (isupper(ch))
      upper_count ++;
    if (islower(ch))
      lower_count ++;
  }
  printf("The txt has %d upper words\n",upper_count);
  printf("The txt has %d lower words\n",lower_count);

  return EXIT_SUCCESS;
}
