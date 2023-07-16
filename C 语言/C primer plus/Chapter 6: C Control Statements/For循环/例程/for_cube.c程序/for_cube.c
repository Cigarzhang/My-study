#include<stdio.h>
int main(void){
    printf("   n   n  cubed\n");
    int number;
    for(number = 1; number <= 6; number ++){
        printf("%5d  %5d\n",number,number*number*number);
    }
    return 0;
}