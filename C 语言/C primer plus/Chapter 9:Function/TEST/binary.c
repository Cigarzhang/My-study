#include <stdlib.h>
#include <stdio.h>
void to_binary(unsigned long n);

int main(int argc, char *argv[])
{
  unsigned long number;
  printf("Enter an integer (q to quit): \n");
  while (scanf("%lu",&number) == 1){
    printf("Binary equivalent: \n");
    to_binary(number);
    putchar('\n');
    printf("Enter an integer (q to quit): \n");
  }
  printf("Done.\n");

  return EXIT_SUCCESS;
}

void to_binary(unsigned long n)
{
  int r;
  r = n % 2;
  if (n >= 2)
    to_binary(n / 2);
  putchar('0' + r);

  return  ;
}
