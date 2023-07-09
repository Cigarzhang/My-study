#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  char ch;
  while ((ch = getchar()) != '#')
  {
    if (ch != '\n')
    {
      printf("Step 1\n");
      if(ch == 'b')
        break;
      else if (ch != 'c')
      {
        if (ch != 'g') 
        printf("Step 2\n");
        printf("Step 3\n");
    }
    }
  }
  printf("Done\n");

  return EXIT_SUCCESS;
}
