#include<stdio.h>
int main(void)
{
    long num;
    long sum;
    _Bool intput_is_good;
    printf("Please enter an integer to be summed. ");
    printf("(q to quit): ");

    intput_is_good = (scanf("%ld",&num) == 1);
    while(intput_is_good)
    {
        sum += num;
        printf("Please enter next integer (q to quit): ");
        intput_is_good = (scanf("%ld",&num) == 1);
    }
    printf("Those integers sum to %ld.\n",sum);
    return 0;
}