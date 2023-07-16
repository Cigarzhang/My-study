//使用嵌套循环产生下列图案：
//s 
//ss
//sss
//ssss
//sssss
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  for(int i = 0; i < 5; i ++)
  {
    for (int j = 0; j <= i; j ++)
    {
     putchar('$');
    }
    printf("\n");
  }

  return EXIT_SUCCESS;
}

