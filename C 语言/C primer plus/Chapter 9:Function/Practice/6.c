//编写一个程序，使其从标准输入读取字符，直到遇到文件结尾。对于每个字符，程序需要检查并报告该字符是否是一个
//字母。如果是的话，程序还应该报告字母在字母表中的数值位置。例如，c和C字母位置都是3。可以先实现这样一个
//函数：接受一个字符参数，如果该字符为字母则返回该字母的数值和位置，否则返回-1.
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

char judWord(char );
int main(int argc, char *argv[])
{
  char ch;
  int position;
  while ((ch = getchar()) != EOF){
    position = judWord(ch);
    if (position != -1)
      printf("Character '%c' is a letter, and its position in alphabet is %d.\n", ch, position);

  }
}

char judWord(char ch)
{
  if (isalpha(ch)){
    ch = toupper(ch);
    return ch - 'A' + 1;
  }
  else
    return -1;
}
