//编写并测试函数larger_of（），其功能是将两个double类型变量的数值替换成它们中的较大值。
//例如，larger_of（x，y）会把x和y中较大数值重新赋给变量x和y。
#include <stdlib.h>
#include <stdio.h>

void larger_of(double *, double *);

int main(int argc, char *argv[])
{
  double a,b;
  scanf("%lf %lf",&a,&b);
  larger_of(&a,&b);
  printf("%.2lf %.2lf\n", a, b);

  return EXIT_SUCCESS;
}

void larger_of(double *x, double *y){
  double max;
  max = (*x > *y) ? *x : *y;
  *x = max;
  *y = max;
}
