//输入两个浮点数，然后打印出用二者的差值除以二者的乘积所得的结果
//在用户键入非数字之前程序循环处理每对输入之前循环处理每对输入值//输入两个浮点数，然后打印出用二者的差值除以二者的乘积所得的结果
//在用户键入非数字之前程序循环处理每对输入之前循环处理每对输入值//输入两个浮点数，然后打印出用二者的差值除以二者的乘积所得的结果
//在用户键入非数字之前程序循环处理每对输入之前循环处理每对输入值
#include <stdlib.h>
#include <stdio.h>

double option(double x ,double y);

int main(int argc, char *argv[])
{

  _Bool input1_is_good,input2_is_good;
  double a,b;
  double result;
  input1_is_good = (scanf("%lf",&a) == 1);
  input2_is_good = (scanf("%lf",&b) == 1);
  while(input1_is_good && input2_is_good)
  {
    result = option(a,b);
    printf("%lf\n",result);
    input1_is_good = (scanf("%lf",&a) == 1);
    input2_is_good = (scanf("%lf",&b) == 1);
  }

 return EXIT_SUCCESS;
} 
double option(double x, double y)
  {
    return (x - y)/(x * y);
  }
 
