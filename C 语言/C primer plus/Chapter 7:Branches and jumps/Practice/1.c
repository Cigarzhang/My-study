//编写一个程序。该程序读取输入直到遇到字符#，然后报告读取的空格数目、读取的换行符数
//以及读取的所有其他字符数目。
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
  char ch;
  int n_line_feed = 0;
  int n_blank = 0;
  int n_other_ch = 0;
  printf("Please enter some characters:\n");
  while ((ch = getchar()) != '#')
  {
    if (ch == ' ')
      n_blank ++;
    else if (ch == '\n')
      n_line_feed ++;
    else 
      n_other_ch ++;
  }
  printf("Your input has %d linefeeds,%d blanks,%d other characters\n",n_line_feed,n_blank,n_other_ch
         );


  return EXIT_SUCCESS;
}
