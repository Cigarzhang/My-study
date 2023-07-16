//1988年United States Federal Tax Schedule 是近期最基本的。它分为4类
//每类有两个等级。下面是其值摘要：美元数为应征税的收入
//单身：前17850美元按15%，超出部分按28%；户主前23900美元按15%，超出
//部分按28%；已婚，共有前29750美元按15%，超出部分按28%；已婚离异
//前14875美元按15%，超出部分按28%
//例如，有20000美元应征税收入的单身雇佣劳动者应缴纳税金0.15*17850美元+0.28*（20000美元-17850美元）
//编写一个程序，让用户指定税金种类和应征税收入，然后计算税金。使用循环
//以便用户可以多次输入。
#include <stdlib.h>
#include <stdio.h>
#define base_rate 0.15
#define over_rate 0.28

char get_first(void);
int get_salary(void);

double caculater_tax(double salary,double base)
{
  if (salary <= base)
    return salary * base_rate;
  else
    return base * base_rate + (salary - base) * over_rate;
}
 void SINGLE_TAX(void){
  double num;
  printf("Please enter your salary:\n");
  num = get_salary();
  printf("You need pay a tax of %.2lf $\n",caculater_tax(num,17850.0));
}

void HOUSEHOLD_TAX(void){
  double num;
  printf("Please enter your salary:\n");
  num = get_salary();
  printf("You need pay a tax of %.2lf $\n",caculater_tax(num,23900.0));
} 

void MARRIED_TAX(void){
  double num;
  printf("Please enter your salary:\n");
  num = get_salary();
  printf("You need pay a tax of %.2lf $\n",caculater_tax(num,29750.0));  
}

void DIVOCRED_TAX(void){
  double num;
  printf("Please enter your salary:\n");
  num = get_salary();
  printf("You need pay a tax of %.2lf $\n",caculater_tax(num,14875.0));  
}
char get_choice(void){
  int ch;

  printf("How is your relationship status now?\n");
  printf("Please enter the letter of your choice(enter q to quit):\n");
  printf("a.Signle       b.Household\n");
  printf("c.Married      c.Divocred\n");
  printf("q.Quit\n");
  ch = get_first();
  while((ch < 'a' || ch > 'd') && ch != 'q')
  {
    printf("Please respond with a, b, c, d or respond whit q to quit.\n");
    printf("How is your relationship status now?\n");
    printf("Please enter the letter of your choice:\n");
    printf("a.Signle       b.Household\n");
    printf("c.Married      c.Divocred\n");
    printf("q.Quit\n");
    ch = get_first();
  }
  return ch;
}

char get_first(void){
  int ch;

  ch = getchar();
  while (getchar() != '\n')
    continue;
  return ch;
}

double get_salary(void){
  double input;
  char ch;

  while (scanf("%lf",&input) != 1)
  {
    while ((ch = getchar()) != '\n')
      putchar(ch);
    printf("is an invalid salary entry\n");
    printf("double value,such as 9000.0,10000.0\n");
  }
  return input;
}
int main(int argc, char *argv[])
{
  int choice;
 
  while((choice = get_choice()) != 'q')
  {
    switch (choice) {
      case 'a':
        SINGLE_TAX();
      break;
      case 'b':
        HOUSEHOLD_TAX();
      break;
      case 'c':
        MARRIED_TAX();
      break;
      case 'd':
        DIVOCRED_TAX();
      break;
      default:printf("Program error!\n");
    }
  }

  return EXIT_SUCCESS;
}
