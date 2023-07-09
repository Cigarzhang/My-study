//编写程序，要求输入一周中的工作小时数，然后打印工资总额、税金以及净工资。
//b.加班（超过40个小时）=1.5倍的时间
//c.税率 前300美元为15%，下一个150美元为20%，余下的为25%用define
//定义常量，不必关心本例是否符合当前的税法。
//使用程序提供一个选择工资等级的菜单，用switch选择工资等级
//如果选择1到4，那么程序应该请求输入工作小时数。程序应该一直循环运行，直到输入5.如果
//输入1到5的选项，那么程序应该提醒用户合适的选项是哪些，然后再循环。
#include <stdio.h>
#include <stdlib.h>

#define BASE_TIME 40
#define OVERTIME_RATE 1.5
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
#define BREAK1 300
#define BREAK2 150

void calculate_salary(double base_salary_scale, int work_hours);

int main() {
    int choice;
    int work_hours;

    while (1) {
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1)$8.75/hr     2)$9.33/hr\n");
        printf("3)$10.00/hr    4)$11.20/hr\n");
        printf("5)quit\n");
        
        scanf("%d", &choice);
        
        if (choice == 5) {
            break;
        }

        if (choice < 1 || choice > 5) {
            printf("Please choose a number from 1 to 5\n");
            continue;
        }

        printf("Please enter your job time :\n");
        scanf("%d", &work_hours);

        switch (choice) {
            case 1: calculate_salary(8.75, work_hours); break;
            case 2: calculate_salary(9.33, work_hours); break;
            case 3: calculate_salary(10.00, work_hours); break;
            case 4: calculate_salary(11.20, work_hours); break;
            default: printf("Unknown choice\n");
        }
    }

    return EXIT_SUCCESS;
}

void calculate_salary(double base_salary_scale, int work_hours) {
    double total_salary;
    double tax;
    double net_salary;
    
    if (work_hours > BASE_TIME) {
        total_salary = BASE_TIME * base_salary_scale + (work_hours - BASE_TIME) * OVERTIME_RATE * base_salary_scale;
    } else {
        total_salary = work_hours * base_salary_scale;
    }

    if (total_salary <= BREAK1) {
        tax = total_salary * RATE1;
    } else if (total_salary <= (BREAK1 + BREAK2)) {
        tax = BREAK1 * RATE1 + (total_salary - BREAK1) * RATE2;
    } else {
        tax = BREAK1 * RATE1 + BREAK2 * RATE2 + (total_salary - BREAK1 - BREAK2) * RATE3;
    }

    net_salary = total_salary - tax;
    printf("Your total salary is: %.2lf, tax is: %.2lf, net salary is: %.2lf\n", total_salary, tax, net_salary);
}

