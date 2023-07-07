//使用嵌套循环if显示一个数的约数
//整数乘法比平方根更快
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
int main(int argc, char *argv[])
{
  unsigned long num;
  unsigned long div;
  bool isPrime;
  
  printf("Please enter a integer for analysis:");
  printf("Enter q to quit\n");
  while ((scanf("%lu",&num) == 1))
  {
    for (div = 2 ,isPrime = true; (div * div) <= num; div ++)
    {
      if (num % div == 0)
      {
        if (div * div != num)
          printf("%lu is divisible by %lu and %lu.\n",num,div,num/div);
        else
          printf("%lu is divisible by %lu\n",num,num/div);
        isPrime = false;
      }
    }
    if(isPrime)
      printf("%lu is prime.\n",num);
    printf("Please enter another integer for analysis:\n");
    printf("Enter q to quit\n");

  }
  
  printf("Bye,Gentleman!\n");

  return EXIT_SUCCESS;
}
