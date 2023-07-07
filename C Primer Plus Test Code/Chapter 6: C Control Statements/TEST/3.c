#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  
  for (int i = 0; i < 6; i ++)
  {
    for (char ch= 'F'; ch >= 'F' - i; ch -- )
      printf("%c",ch);
    
  printf("\n");
  }

  return EXIT_SUCCESS;
}
