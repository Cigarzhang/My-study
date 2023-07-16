//设计函数min(x,y)，返回两个double数值中比较小的数值，同时用一个简单的驱动程序测试该函数
#include <stdlib.h>
#include <stdio.h>

double min(double x,double y);
int main(int argc, char *argv[])
{
  double n,m;
  printf("Please enter two number :\n");
  scanf("%lf %lf",&n,&m);

  printf("The min number between %.1lf %.1lf is %.1lf\n",n,m,min(n,m));
  return EXIT_SUCCESS;
}

double min(double x,double y)
{
  double num;
  num = x;
  if (y < num)
    num  = y;
  return num;
}


