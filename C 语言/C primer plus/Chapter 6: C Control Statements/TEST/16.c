//Chuckie Lucky赢了100万美元，他把它存入一个每年赢得8%的账户。每年
//的最后一天，Chuckie Lucky取出10万美元。编写一个程序,计算需要多少
//年Chuckie就会清空他的账户。
#include <stdlib.h>
#include <stdio.h>
#define Deposit 100
#define Rate 0.08
#define Withdrawal 10

int main(int argc, char *argv[])
{

  int count = 0;
  double Balance = Deposit;
  do {
    Balance += Balance * Rate;
    Balance -= 10;
    count ++;
  }
  while (Balance > 0);
  printf("After %d years,Chuckie emptied his property\n",count);
  return EXIT_SUCCESS;
}
