/*编写一个程序打印一个表，表的每一行都给出一个整数
它的平方以及它的立方。要求用户输入表的上限与下限。使用一个for循环*/
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  int upper_limit,lower_limit;
  printf("请输入上限：\n");
  scanf("%d",&upper_limit);
  printf("请输入下限：\n");
  scanf("%d",&lower_limit);
  if (upper_limit < lower_limit)
    printf("输入错误");
  else {
    for (int i = lower_limit; i <= upper_limit; i ++)
    {
      printf("%d  ",i);
      printf("%d  ",i*i);
      printf("%d\n",i*i*i);
    }
  } 


  return EXIT_SUCCESS;
}
