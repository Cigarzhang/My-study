//Daphne以%10的单利息投资了100美元(也就是说,每年投资赢得的利息等于
//原始投资的10%)。Deirdre则以每年5%的复合利率投资了100美元(也就是
//说,利息是当前结余的5%,其中包括以前的利息).编写一个程序,计算需要
//多少年Deirdre的投资额才会超过Daphne,并且显示出到那时两个人的投资额
#include <stdlib.h>
#include <stdio.h>
#define Inv 100
#define RATE1 0.1
#define RATE2 0.05


int main(int argc, char *argv[])
{
  double a = Inv * RATE1;
  int count = 0;
  double De,Da;
  De = Inv;
  Da = Inv;
  do{
    Da += a;
    De += De * RATE2;
    count ++;
  }
  while (De <= Da);

  printf("After %d years de more than da\n",count);
  printf("Deirdre's investment at this time is:%lf$\n",De);
  printf("Daphne's investment at this time is:%lf$\n",Da);
  return EXIT_SUCCESS;
}
