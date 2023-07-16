//编写程序，要求输入一周中的工作小时数，然后打印工资总额、税金以及净工资。
//做出如下假设：a. 基本工资等级=10.00美元/小时
//b.加班（超过40个小时）=1.5倍的时间
//c.税率 前300美元为15%，下一个150美元为20%，余下的为25%用define
//定义常量，不必关心本例是否符合当前的税法。
#include <stdlib.h>
#include <stdio.h>
#define Base_Time 40
#define Rate1 0.15
#define Rate2 0.2
#define Rate3 0.25
#define First_Tax_Limit 300
#define Second_Tax_Limit 150
#define Over_Time_Rate 1.5
#define Base_Salary_Scale 10

int main(int argc, char *argv[])
{
  int Work_Hourses; 
  double Total_Salay,Tax,Net_Salay;
  printf("Please enter your job time :\n");
  scanf("%d",&Work_Hourses);
  if (Work_Hourses > Base_Time)
    Total_Salay = Base_Time * Base_Salary_Scale + (Work_Hourses - Base_Time) * Over_Time_Rate * Base_Salary_Scale;
  else
    Total_Salay = Work_Hourses * Base_Salary_Scale;

  if (Total_Salay <= First_Tax_Limit)
  {
    Tax = Total_Salay * Rate1;
    Net_Salay = Total_Salay - Tax;
  }
  else if(Total_Salay <= (First_Tax_Limit + Second_Tax_Limit))
  {
    Tax = First_Tax_Limit * Rate1 + (Total_Salay -First_Tax_Limit)* Rate2;
    Net_Salay = Total_Salay - Tax;
  }
  else
  { 
    Tax = First_Tax_Limit * Rate1 + Second_Tax_Limit * Rate2 + (Total_Salay-(First_Tax_Limit + Second_Tax_Limit)) * Rate3;
    Net_Salay = Total_Salay - Tax;
  }
  
  printf("Your total salay is : %.2lf,tax is : %.2lf,net salay is : %.2lf\n",Total_Salay,Tax,Net_Salay);
 
  return EXIT_SUCCESS;
}
