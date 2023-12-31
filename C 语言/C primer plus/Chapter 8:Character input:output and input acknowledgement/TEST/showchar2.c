/*showchar2.c -- 按行和列打印字符*/
#include <stdlib.h>
#include <stdio.h>

void display(char cr, int lines ,int width);
int main(int argc, char *argv[])
{
  int ch;
  int rows,cols;

  printf("Enter a character and two integers:\n");
  while((ch = getchar()) != '\n')
  {
    if (scanf("%d %d",&rows,&cols) != 2)
      break;
    display (ch, rows, cols);
    while(getchar() != '\n')
      continue;
    printf("Enter another character and two integers;\n");
    printf("Enter a newline to quit.\n");
  }
  printf("Bye!\n");

  return EXIT_SUCCESS;
}
void display(char cr, int lines, int width)
{
  int row,col;

  for (row = 1; row <= lines; row++)
  {
    for (col = 1; col <= width; col++)
      putchar(cr);
    putchar('\n');
  }
}
