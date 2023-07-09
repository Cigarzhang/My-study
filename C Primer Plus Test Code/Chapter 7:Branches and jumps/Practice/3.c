//编写一个程序。该程序读取整数，直到输入0。输入终止后，程序应该报告输入的偶数（不包括0）
//总个数、偶数的平均值，输入的奇数总个数以及奇数的平均值。
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  int a;
  int eve = 0;
  int n_eve = 0;
  int odd = 0;
  int n_odd = 0;
  printf("Please enter some integers (0 to quit):\n");
  while ((scanf("%d",&a) == 1) && a != 0)
  {
    if (a % 2 == 0)
    {
      n_eve ++;
      eve += a;
    }
    else
    {
      n_odd ++;
      odd += a;
    }

  }
  float eve_ave = (float) eve / n_eve; 
  float odd_ave = (float)odd / n_odd;
  if (n_eve > 0)
    printf("The number of even you enter and its avreage are:%d  %.2f\n",n_eve,eve_ave);
  if (n_odd > 0)
    printf("The number of odd you enter and its avergae are:%d  %.2f\n",n_odd,odd_ave);
  return EXIT_SUCCESS;
}
