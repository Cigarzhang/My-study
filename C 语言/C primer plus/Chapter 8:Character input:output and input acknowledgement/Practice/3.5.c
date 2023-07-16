//打印大写单词和小写单词数量
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>  // 引入stdbool.h以使用bool类型

int main(int argc, char *argv[])
{
  char ch;
  int upper_count = 0;  // 用于存储大写字母单词的数量
  int lower_count = 0;  // 用于存储小写字母单词的数量
  bool in_word = false;  // 布尔标志，用于跟踪我们是否在一个单词内
  bool is_upper = false;  // 布尔标志，用于跟踪当前单词是否为大写
  
  while ((ch = getchar()) != EOF)  // 读取输入直到文件结束
  {
    if (isalpha(ch)) {  // 检查字符是否为字母
      if (!in_word) {  // 如果我们不在一个单词内，则开始一个新单词
        in_word = true;
        is_upper = isupper(ch);
        if (is_upper)
          upper_count++;  // 如果单词是大写，大写单词计数器增加
        else
          lower_count++;  // 否则，小写单词计数器增加
      } else if ((is_upper != isupper(ch)) && in_word) {  // 如果当前字母的大小写与当前单词的大小写不匹配，则开始一个新单词
        is_upper = isupper(ch);
        if (is_upper)
          upper_count++;
        else
          lower_count++;
      }
    } else {
      in_word = false;  // 如果字符不是字母，我们不再单词内
    }
  }

  printf("The txt has %d upper words\n", upper_count);  // 打印大写单词数量
  printf("The txt has %d lower words\n", lower_count);  // 打印小写单词数量

  return EXIT_SUCCESS;
}

