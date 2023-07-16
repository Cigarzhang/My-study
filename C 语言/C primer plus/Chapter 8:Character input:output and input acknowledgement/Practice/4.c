// 编写一个程序，把输入作为字符流读取，直到遇到EOF。令其报告每个单词的
//平均字母数。不要将空白字符记为单词中的字母。实际上，标点符号也不应该计算
//但现在不必考虑这一点（如果您想做得好一些，可以考虑使用ctype.h系列中的
//ispunct()函数）。
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
  char ch;
  int char_count = 0;
  int word_count = 0;
  bool in_word = false;

  while((ch = getchar()) != EOF)
  {
    if (isalpha(ch)){
      char_count ++;
      if (!in_word)
      {
        in_word = true;
        word_count ++;
      }
    }
    else if(ch == ' ' || ch == '\n' || ch == '\t' || ispunct(ch))
      in_word = false;
  }
  float average_num = (float) char_count / word_count;
  if (word_count != 0)
    printf("Average letters per word: %.2f\n",average_num);

  else
    printf("There are no words\n");
  return EXIT_SUCCESS;
}
