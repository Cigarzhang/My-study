#include <stdlib.h>
#include <stdio.h>

int imin(int, int);

int main(int argc, char *argv[])
{
  int evil1,evil2;

  printf("Enter a pair of integers(q to quit)\n");
  while (scanf("%d %d",&evil1,&evil2) == 2) {
    printf("The lesser of %d and %d is %d.\n",evil1,evil2,imin(evil1,evil2));
    printf("Enter a pair of integers (q to quit): \n");
  }
  printf("Bye.\n");

  return EXIT_SUCCESS;
}

int imin(int n, int m)
{
  /*int min;

  if(n < m)
    min = n;
  else
    min = m;

  return min;*/
  return (n < m) ? n : m;
}
