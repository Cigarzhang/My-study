// 编写一个程序，创建一个具有26个元素的数组，并在其中存储26个小写字母，并让该程序显示该数组的内容。
#include <stdlib.h>
#include <stdio.h>


char a[26];
int main(void)
{
  char ch;
  for(int i = 0; i < 26; i ++)
  {
    a[i] = 'a' + i;
  }
  for (int i = 0 ;i < 26; i ++  )
  {
    printf("%c",a[i]);
  }
  return 0;
}
