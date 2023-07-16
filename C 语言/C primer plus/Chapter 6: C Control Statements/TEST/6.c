/*编写一个程序把一个单词读入一个字符数组，然后反向打印出这个词。*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


const int N = 100;

int main(int argc, char *argv[])
{
  char ch[N];
  int length;
  printf("请输入一个单词：\n");
  scanf ("%s",ch);
  length = strlen(ch);
  printf("反向打印单词\n");

  for (int i = length - 1; i >= 0; i --)
    printf("%c",ch[i]);
  printf("\n");

  return EXIT_SUCCESS;
}
/*在使用scanf函数读取字符串时，对于字符数组（字符串），
我们不需要使用取地址运算符&。
这是因为字符数组本身已经是一个指向其首元素的指针。
当我们使用scanf读取字符串时，
%s格式字符串后面的参数应该是字符数组的名称，
而不是数组的地址。由于数组名称本身就表示数组的地址，
所以不需要使用&操作符。
因此，对于读取字符串的语句scanf("%s", word);中，
word表示字符数组的名称，而不需要使用&。
需要注意的是，为了避免缓冲区溢出问题，建议在scanf函数中指定读
取的最大字符数，如scanf("%99s", word);，其中99是字符数组的长度减1，
以确保留一个位置用于字符串末尾的空字符*/
