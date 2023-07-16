//编写一个程序,创建两个8元素的double数组,使用一个循环来让用户键入
//第一个数组的8个元素的值。程序把第二个元素设置为第一个元素的累积
//和。例如,第二个数组的第4个元素应该等于第一个数组的前4个元素的和
//第二个数组的第5个元素应该等于第一个数组的前5个元素的和(使用嵌套
//循环可以做到这一点.不过利用第二个数组的第5个元素等于第二个数组
//的第4个元素加上第一个数组的第5个元素这一事实,可以避免嵌套而使
//用单个循环来完成这个任务)。最后,使用一个循环来显示这两个数组的
//内容，第一个数组在一行中显示，而第二个数组中的每个元素在第一个
//数组的对应元素之下进行显示.
#include <stdlib.h>
#include <stdio.h>
const int N = 10;
int main(int argc, char *argv[])
{
  double a[N],b[N];
  double c;
  printf("Please enter 8 number\n");
  for (int i = 0; i < 8; i ++)
  {
    scanf("%lf",&a[i]);
    if (i == 0) 
      b[i] = a[i];
    else 
      b[i] = b[i - 1] + a[i];//累加； 
  }   
  printf("The program output is as follows :\n");
  for (int i = 0; i < 8; i ++)
  {
    printf("%lf ",a[i]);
  }
  printf("\n");
  for (int i = 0; i < 8; i ++)
    printf("%lf ",b[i]);
  return EXIT_SUCCESS;
}
