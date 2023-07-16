//编写一个程序,创建一个8个元素的int数组，并且把元素分别设置为2
//的前8次幂,然后打印出它们的值.使用for循环来设置值;为了变化,使
//用dowhile循环来显示这些值
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
  int array[10];
  for (int i = 0; i < 8; i ++)
  {
    array[i] = pow(2,i);
  }

  int i = 0;
  do{
    printf("%d  ",array[i]);
    i ++;
  }
  while (i < 8);
  return EXIT_SUCCESS;
}
