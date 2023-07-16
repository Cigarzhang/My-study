#include <stdlib.h>
#include <stdio.h>

int imax(int n, int m);
int main(int argc, char *argv[])
{
  printf("The maximum of %d and %d is %d.\n",3,5,imax(3,5));
  return EXIT_SUCCESS;
}

int imax(int n, int m)
{
  return (n > m) ? n : m;
}
