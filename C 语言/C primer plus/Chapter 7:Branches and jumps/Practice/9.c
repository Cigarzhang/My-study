//编写一个程序，接受一个整数输入，然后显示所有小于或等于该数的素数。
#include <stdlib.h>
#include <stdio.h>

int isPrime(int num)
{
  if (num <=1) return 0;
  for (int i = 2; i * i <= num; i ++){
    if (num % i == 0) return 0;
  }
  return 1;
}
int main(int argc, char *argv[])
{
  int n;
  printf("Please enter a number\n");
  if (scanf("%d",&n) == 1 && n > 1)
  {
    for (int i = 2; i <= n; i ++)
    {
      if (isPrime(i)) 
        printf("%d  ",i);
    }
    printf("\n");
  }
  else printf("Please enter a number that over than 1!\n");
  printf("Done!\n");
  return EXIT_SUCCESS;
}
