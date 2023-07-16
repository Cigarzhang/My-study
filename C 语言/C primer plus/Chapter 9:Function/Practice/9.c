//十进制转n进制
#include <stdlib.h>
#include <stdio.h>
void to_base_n(unsigned long n, unsigned long m);

int main(int argc, char *argv[])
{
  unsigned long number,base;
  printf("Enter an integer and the base for conversion: ");
  while (scanf("%lu %lu",&number,&base) == 2){
    printf("The equivalent of the number in base %lu: ", base);
    to_base_n(number, base);
    putchar('\n');
    printf("Enter an integer (q to quit): \n");
  }
  printf("Done.\n");

  return EXIT_SUCCESS;
}

void to_base_n(unsigned long n,unsigned long m)
{
  int r;
  r = n % m;
  if (n >= m)
    to_base_n(n / m, m);

  if (r < 10)
    putchar('0' + r);
  else
    putchar('a' + r - 10);
  return  ;
}
/*1.int r; r = n % m;：这里我们定义了一个整型变量r，并将其值设为n对m的余数。这实际上就是十进制数n的m进制
表示中的最低位。
2.if (n >= m) to_base_n(n / m, m);：接下来，我们检查n是否大或等于m。如果是我们将n除以m得到的结果再次传入
to_base_n 函数。这是一个递归调用，可以让我们依次得到 n 的 m 进制表示的所有位
从最高位到最低位。
3.if (r < 10) putchar('0' + r); else putchar('a' + r - 10);：最后，我们输出n的m进制表示的当前位
（在递归调用中是最高位，最外层调用则是最低位）。如果r小于10，我们输出对应的数字字符
（通过将r加到字符'0'来实现）。如果r大于等于10，我们输出对应的字母字符
（通过将r减10后加到字符'a'来实现）。
return;：函数结束，返回到调用者。
*/
