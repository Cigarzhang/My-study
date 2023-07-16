#include<stdio.h>
int main(void){
    long num;
    long sum = 0L; //长整形
    int status;
    
    printf("Please enter an integer to be summed. ");
    printf("(q to quit):");
    status = scanf ("%ld",&num);//scanf读入的值为整形，返回1并赋值给status，否则返回0并赋值给status
    while (status == 1)//可以写成c风格代码：while(status = scanf("%ld",&num == 1))
    {
        sum = sum + num;
        printf("please enter next integer (q to quit): ");
        status = scanf("%ld",&num);

    }
    printf("Those integers sum to %ld.\n", sum);
    return 0;
}
