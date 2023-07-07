//编写一个程序把8个整数读入一个数组中，然后以相反的顺序打印它们。
#include <stdlib.h>
#include <stdio.h>

const int N = 10;
int main(int argc, char *argv[])
{
  int store[N];
  int all = 8;
  printf("Please enter 8 integer numbers:");
  for (int i = 0; i < all; i ++) 
  {
    scanf("%d",&store[i]);
  }
  printf("Print in reverse order：");
  for (int i = all - 1; i >= 0; i --) 
  {
     printf("%d ",store[i]);
  }
  return EXIT_SUCCESS;
}
