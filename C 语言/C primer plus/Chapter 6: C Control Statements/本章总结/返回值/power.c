// 1.当定义函数时，说明它的返回值类型
// 2.使用关键字return指示要返回的值
#include <stdlib.h>
#include <stdio.h>

double power (double n, int p);
int main(int argc, char *argv[])
{
  double x,xpow;
  int exp;
  
  printf("Enter a number and the positive integer power");
  printf("to which\nthe number will be raised. Enter q");
  printf("to quit.\n");
  while(scanf("%lf%d",&x,&exp) == 2)
  {
    xpow = power(x,exp);
    printf("%.3g to the power %d is %.5g\n",x,exp,xpow);
    printf("Enter nex pair of numbers or q to quit.\n");
  }
  printf("Hope you enjoyed this power trip -- bye!\n");

  return EXIT_SUCCESS;
}

double power(double n, int p)
{
  double pow = 1;
  int i;

  for(i = 1; i <= p; i ++)
    pow *= n;
  return pow;
}

