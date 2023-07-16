//编写一个程序，把输入作为字符流读取，直到遇到EOF。令该程序打印每个输入字符及其ASCII编码的十进制。注意在
//ASCII序列中空格字符前面的字符是非打印字符，要特殊处理这些字符。如果非打印字符是换行符或者制表符，则分别
//打印\n或\t。否则，使用控制字符符号。例如，ASCII的1是Ctrl+A，可以显示为^A。注意A的ASCII值是Ctrl+A的值加64.
//对其他非打印字符也保持相似的关系。除去每次遇到一个换行符时就开始一个新行之外，每行打印10对值
#include <stdio.h>

int main(int argc, char *argv[])
{
    int ch;
    int count = 0;
    while ((ch = getchar()) != EOF) {
        if(ch == '\n'){
            printf("\\n %d\n",ch);
            count = 0;  // reset count when a new line starts
            continue;   // go to the next loop iteration
        } else if (ch == '\t'){
            printf("\\t %d ",ch);
        } else if(ch >= ' ' && ch <= 127){
            printf("%c %d ",ch, ch);
        } else {
            printf("^%c %d ",ch + 64, ch);
        }

        count ++;
        if (count % 10 == 0) printf("\n");
    }

    return 0;
}

