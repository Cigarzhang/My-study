//编写并测试一个函数Fibonacci(),在该函数中使用循环代替递归完成斐波那契数列的计算。
#include <stdio.h>

unsigned long long fibonacci(unsigned int n){
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else{
        unsigned long long fibo_n_minus_2 = 0;
        unsigned long long fibo_n_minus_1 = 1;
        unsigned long long fibo_n;
        for(unsigned int i = 2; i <= n; i++){
            fibo_n = fibo_n_minus_1 + fibo_n_minus_2;
            fibo_n_minus_2 = fibo_n_minus_1;
            fibo_n_minus_1 = fibo_n;
        }
        return fibo_n;
    }
}

int main(){
    unsigned int n;
    printf("Enter the position of the Fibonacci sequence: ");
    scanf("%u", &n);
    printf("The %uth number in Fibonacci sequence is %llu\n", n, fibonacci(n));
    return 0;
}

