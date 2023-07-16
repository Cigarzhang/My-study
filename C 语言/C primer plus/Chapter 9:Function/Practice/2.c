//设计函数chline(ch,i,j) ，实现指定字符在i列到j列的输出，并用一个简单的驱动程序测试函数。
#include <stdlib.h>
#include <stdio.h>

void chline(char, int, int);

int main(int argc, char *argv[])
{
    int start, end;
    char ch;
    char input_continue;

    do {
        printf("Please enter the character you want to print: ");
        scanf(" %c", &ch);  
        if (ch < ' ' || ch > '~') {
            printf("Error: Please enter a valid printable ASCII character.\n");
            continue;
        }

        printf("Please enter the starting and ending columns (1 - 80): ");
        scanf("%d %d", &start, &end);
        if (start < 1 || start > 80 || end < 1 || end > 80 || start > end) {
            printf("Error: Please enter column numbers between 1 and 80, with the start column being less than or equal to the end column.\n");
            continue;
        }

        chline(ch, start, end);
        printf("\n\n");  

        printf("Continue with another character and column range (Y/N)? ");
        scanf(" %c", &input_continue);
    } while (input_continue == 'Y' || input_continue == 'y');

    return EXIT_SUCCESS;
}

void chline(char ch, int i, int j)
{
    for (int a = 1; a < i; a++)
        printf(" ");
    for (int b = i; b <= j; b++)
        printf("%d: %c ", b, ch);
}

