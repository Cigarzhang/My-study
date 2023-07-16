#include <stdlib.h>
#include <stdio.h>
void interchange(int u, int v);
int main(int argc, char *argv[])
{
  int x = 5,y = 10;
  
  printf("Originally x = %d and y = %d.\n",x,y);
  interchange(x,y);
  printf("Now x = %d and y = %d.\n",x,y);
  return EXIT_SUCCESS;
}

void interchange(int u, int v)
{
  int temp;

  printf("Originally u = %d and v = %d.\n",u,v);
  temp = u;
  u = v;
  v = temp;
  printf("Now u = %d and v= %d.\n",u,v);
}
