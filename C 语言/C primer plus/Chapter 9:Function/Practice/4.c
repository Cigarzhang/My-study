//两数值的谐均值可以这样计算：首先对两数值的倒数取平均值，最后再取倒数编写一个带有两个double参数的函数，计算这
//两个参数的谐均值
#include <stdlib.h>
#include <stdio.h>

double harmonicCaculate(double, double);
int main(int argc, char *argv[])
{
  double n,m;
  printf("Please enter two number:\n");
  scanf("%lf %lf",&n,&m);
  printf("The harmoic mean is %.2lf\n",harmonicCaculate(n,m));
  return EXIT_SUCCESS;
}

double harmonicCaculate(double x, double y)
{
  double temp, arrage;
  x = 1 / x;
  y = 1 / y;
  arrage = (x + y) / 2;
  temp = 1 / arrage;
  return temp;
}

