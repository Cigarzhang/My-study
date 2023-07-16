//编写一个函数。函数的3个参数是一个字符和两个整数。字符参数是需要输出的字符。第一个字符说明了在每行中该字符输出的个数
//而第二个整数指的是需要输出的行数。编写一个调用该函数的程序。
#include <stdlib.h>
#include <stdio.h>

void printCharacter(char, int, int );

int main(int argc, char *argv[])
{
    char ch;
    int num, line;

    printf("Please enter a character: ");
    scanf(" %c", &ch);

    printf("Please enter the number of times to print the character per line and the number of lines: ");
    scanf("%d %d", &num, &line);

    if (num < 1 || line < 1) {
        printf("Error: Please enter positive integers for the number of times to print the character per line and the number of lines.\n");
        return EXIT_FAILURE;
    }

    printCharacter(ch, num, line);

    return EXIT_SUCCESS;
}

void printCharacter(char ch, int num, int line)
{
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < num; j++)
            printf("%c ", ch);
        printf("\n");
    }
}

