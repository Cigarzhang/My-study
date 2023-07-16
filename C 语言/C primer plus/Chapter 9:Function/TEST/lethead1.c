#include <stdlib.h>
#include <stdio.h>
#define NAME "GIGATHINK, INC. "
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void statbar(void);

int main(int argc, char *argv[])
{
  statbar();
  printf("%s\n",NAME);
  printf("%s\n",ADDRESS);
  printf("%s\n",PLACE);
  statbar();

  return EXIT_SUCCESS;
}

void statbar(void)
{
  int count;

  for(count = 1; count <= WIDTH; count ++)
    putchar('*');
  putchar('\n');
}
