//在第6章中，函数power（）的功能是返回一个double类型数的某个正整数次幂。现在改进该函数，使其能正确地计算负幂
//同时，用该函数实现0的任何次幂为0，并且任何数值的0次幂为1.使用循环的方法编写该函数并在一个程序中测试它。
#include <stdio.h>

double power(double n, int p){
    double pow = 1;
    int i;
    
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
        p = -p;
        n = 1 / n;
    }
    
    for(i = 1; i <= p; i++){
        pow *= n;
    }
    
    return pow;
}

int main(){
    double x;
    int exp;
    printf("Enter a number and a integer power to raise the number to: ");
    scanf("%lf %d", &x, &exp);
    printf("Result: %.2lf\n", power(x, exp));
    
    return 0;
}

