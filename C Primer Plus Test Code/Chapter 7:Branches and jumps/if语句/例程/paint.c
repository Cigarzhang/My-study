//使用条件运算符
#include <stdlib.h>
#include <stdio.h>
#define COVERAGE 200


int main(int argc, char *argv[])
{
  int sq_feet;
  int cans;
  
  printf("Enter number of square feet to be painted:\n");
  while (scanf("%d",&sq_feet) == 1){
    cans = sq_feet / COVERAGE;
    cans += ((sq_feet % COVERAGE == 0)) ? 0: 1;
    printf("You need %d %s of paint.\n",cans,cans == 1? "can":"cans");
    printf("Enter nex value(q to quit):\n");
  }

  return EXIT_SUCCESS;
}

