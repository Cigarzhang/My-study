//编写一个程序，显示一个菜单，为您提供加法、减法、乘法或除法的选项。
//获得您的选择后，该程序请求两个数，然后执行您选择的操作。该程序
//应该只接受它所提供的菜单选项。它应该使用float类型的数，并且如果用户
//未能输入数字应允许其重新输入。在除法的情况下，如果用户输入0作为
//第二个数，该程序应该提示用户输入一个新的值。一个典型的程序运行应
//该如下所示：
//Enter the operation of your choice:
//a.add  s.subtract
//m.multiply d.divide
//q.quit
//Enter first number: 22.4
//Enter second number:one
//one is not a number.
//Enter second number:one
//one is not a number.
//Enter second number:one
//one is not a number.
#include <stdlib.h>
#include <stdio.h>

char get_first(void);
char get_choice(void);
void add(void);
void subtract(void);
void multiply(void);
void divide(void);
float get_number(void);

int main(int argc, char *argv[])
{
  char choice;

  while((choice = get_choice()) != 'q')
  {
    switch (choice) {
      case 'a': add();
      break;
      case 's': subtract();
      break;
      case 'm': multiply();
      break;
      case 'd': divide(); 
      break;
      default:printf("Program error!\n");
    }
  }
  return EXIT_SUCCESS;
}

char get_choice(void)
{
  int ch;
  printf("Enter the operation of your choice:\n");
  printf("a.add        s.subtract\n");
  printf("m.multiply   d.divide \n");
  printf("q.quit\n");
  ch = get_first();
  while((ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q'))
  {
    printf("Please respond with a, s, m, d, or q.\n");
    ch = get_first();
  }
  return ch;
}

char get_first(void)
{
  int ch; 
  ch = getchar();
  while (getchar() != '\n')
    continue;
  return ch;
}

float get_number(void)
{
  float a;
  char input[100]; // buffer for user's input

  while (1) {
    fgets(input, sizeof(input), stdin); // read user's input

    char* endptr; // extra parameter for strtof
    a = strtof(input, &endptr); // attempt to convert input to float
    if (*endptr == '\n') { // if conversion successed, endptr should point to the newline character
      break;
    }
    printf("%s is not a number. Please enter a number, such as 2.5, -1.78E8, or 3.\n", input);
  }

  return a;
}

void add(void)
{
  printf("Enter first number : ");
  float a = get_number();

  printf("Enter second number : ");
  float b = get_number();

  printf("%.2f + %.2f = %.2f\n", a, b, a + b);
}

void subtract(void)
{
  printf("Enter first number : ");
  float a = get_number();

  printf("Enter second number : ");
  float b = get_number();

  printf("%.2f - %.2f = %.2f\n", a, b, a - b);
}

void multiply(void)
{
  printf("Enter first number : ");
  float a = get_number();

  printf("Enter second number : ");
  float b = get_number();

  printf("%.2f * %.2f = %.2f\n", a, b, a * b);
}

void divide(void)
{
  printf("Enter first number : ");
  float a = get_number();

  printf("Enter second number : ");
  float b = get_number();

  while(b == 0)
  {
    printf("Divisor cannot be zero, please enter a number other than 0.\n");
    b = get_number();
  }

  printf("%.2f / %.2f = %.2f\n", a, b, a / b);
}

