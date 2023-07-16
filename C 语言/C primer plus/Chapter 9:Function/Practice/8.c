//使用递归函数重做练习7
#include <stdio.h>

double power(double n, int p){
    if(n == 0){
        if(p == 0){
            printf("0 to the power of 0 is undefined. Here, it's treated as 1.\n");
            return 1;
        }else{
            return 0;
        }
    }else if(p == 0){
        return 1;
    }else if(p < 0){
        return 1 / (n * power(n, -(p + 1))); // 这里p+1是为了避免在p=-2147483648时发生溢出
    }else{
        return n * power(n, p - 1);
    }
}

int main(){
    double x;
    int exp;
    printf("Enter a number and a integer power to raise the number to: ");
    scanf("%lf %d", &x, &exp);
    printf("Result: %.2lf\n", power(x, exp));
    
    return 0;
}

