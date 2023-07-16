//修改清单8.4中的猜测程序，使其使用更智能的猜测策略。例如，程序最初猜50，让其询问用户猜测值是大，小还是正确
//如果猜测值小，则令下一次猜测值为50和100的中值，也就是75.如果75大，则下一次猜测值为75和50的中值，等等。
//使用这种二分搜索（binary search）策略，起码如果用户没有欺骗，该程序很快会获得答案。 

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
char response;
int guess;
int binary_search(int l, int r)
{
  while(l <= r){
  int mid = l + (r - l) / 2;
  printf("Is your secret number %d?\n", mid);
  printf("Enter 'l' if your number is lower, 'h' if it is higher, 'c' if it is correct: ");
  scanf(" %c", &response);
  if (response == 'h')
    r = mid - 1;
  else if (response == 'l')
    l = mid + 1;
  else{ 
    guess = mid;
    break;
    }
  }
  return guess;
}
int main(int argc, char *argv[])
{
  printf("Pick an integer from 1 to 100. I will try to guess ");
  printf("it.\nRespond with a 'h' if my guess is high, with an 'l' ");
  printf("if it is low, and with a 'c' if it is correct.\n");

  guess = binary_search (1,100);
  printf("Your secret number is %d!\n", guess);
  return EXIT_SUCCESS;
}
