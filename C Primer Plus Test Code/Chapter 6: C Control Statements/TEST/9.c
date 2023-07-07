//编写一个程序，要求用户输入下限整数和一个上限整数，然后，依此
//计算从下限到上限的每一个整数的平方的加和，最后显示结果。程序
//将不断提示用户输入下限整数和上限整数并显示出答案，直到用户输
//入的上限整数等于或小于下限整数位置。程序运行的结果事例如下：
//Enter lower an upper integer limits:5 9
//The sums of the squares from 25 to 81 is 255
//Enter next set of limits:3 25
//The sums of the squares from 9  to 625 is 5520 
//Enter next set of limits: 5 5 
//Done
#include <stdlib.h>
#include <stdio.h>

int squares(int x);
int main(int argc, char *argv[])
{
  int  sum = 0;
  int sq;
  int upper_limit,lower_limit;
  _Bool input1_is_good, input2_is_good;
  printf("Enter lower and upper integer limits:\n");
  input1_is_good = (scanf("%d",&lower_limit) == 1);
  input2_is_good = (scanf("%d",&upper_limit) == 1);

  while (input1_is_good && input2_is_good && lower_limit < upper_limit)
  {
    sum = 0;
    for (int i = lower_limit; i <= upper_limit; i ++)
    {
      sq = squares(i);
      sum += sq;
    }
    printf("The sums of the squares from %d to %d is %d\n",lower_limit,upper_limit,sum);
    printf("Enter next set of limits:\n");
    input1_is_good = (scanf("%d",&lower_limit) == 1);
    input2_is_good = (scanf("%d",&upper_limit) == 1);
 
  }
  printf("Done\n");

  return EXIT_SUCCESS;
}
int squares(int x)
{
  return x*x;
}
