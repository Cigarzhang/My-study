//ABC Mail Order Grocery朝鲜蓟的售价是1.25美元/磅，甜菜的价格是0.65美元/磅，胡萝卜的售价是0.89美元/磅
//在添加运输费用之前,他们为100美元的订单提供5%的打折优惠。对5磅或以下的订单收取3.50美元的运输和装卸费用
//；超过2磅而不足20磅的订单收取10.00美元的运输和装卸费用；20磅或以上的运输，在8美元的基础上每磅加收0.1美元。
//编写程序，在循环中使用switch语句，以便对输入a的响应是让用户输入所需朝鲜蓟磅数，b为甜菜磅数，c为胡萝卜
//磅数，而q允许用户退出订购过程。然后程序计算总费用、折扣和运输费用（如果有运输费的话），以及总数。随后
//程序应该显示所有的购买信息：每磅的费用、订购的磅数、该订单每种蔬菜的费用、订单的总费用、折扣，如果有的
//话加入运输费用，以及所有费用的总数。
#include <stdlib.h>
#include <stdio.h>
#define ARTICHOKE_UNIT_PRICE 1.25 
#define BEET_UNIT_PRICE 0.65
#define CARROT_UNIT_PRICE 0.89
#define PREFERENTIAL 0.05
#define UNIT_POUND_PRICE1 3.50
#define UNIT_POUND_PRICE2 10
#define UNIT_POUND_PRICE3 0.1
int COUNT_BOUND = 0;
double ART_PRICE = 0.0;
double BEE_PRICE = 0.0;
double CAR_PRICE = 0.0;
int NUM_ART = 0;
int NUM_BEE = 0;
int NUM_CAR = 0;
char GET_FIRST(void){
  int ch;

  ch = getchar();
  while (getchar() != '\n') 
    continue;
  return ch;  
}

char GET_CHOICE(void){
  int ch;
  printf("Welecome to our online markert\n");
  printf("Please choose the vegetables your want:\n");
  printf("a.Artichoke     b.Beet\n");
  printf("c.Carrot        q.quit\n");
  ch = GET_FIRST();
  while((ch < 'a' || ch > 'c') && ch != 'q'){
    printf("Please respond with a, b, c, or q\n");
    printf("Welecome to our online markert\n");
    printf("Please choose the vegetables your want:\n");
    printf("a.Artichoke     b.Beet\n");
    printf("c.Carrot        q.quit\n");
    ch = GET_FIRST();
  }
  return ch;
}
double CACULATE_UNIT_TOTAL_PEICE(int POUND,double UNIT_PRICE){
  return POUND * UNIT_PRICE;
}

double CACULATE_FREIGHT(int a){
  if (a <= 0) 
    return 0;
  else if (a > 0 && a <= 5)
    return UNIT_POUND_PRICE1;
  else if(a > 5 && a < 20)
    return UNIT_POUND_PRICE2;
  else
    return 8 + COUNT_BOUND * UNIT_POUND_PRICE3;

}


void BUY_ARTICHOKE(void){
  printf("Please enter the number you wan to buy artichoke:\n");
  if ((scanf("%d",&NUM_ART) == 1) && NUM_ART > 0){
    COUNT_BOUND += NUM_ART;
    ART_PRICE += CACULATE_UNIT_TOTAL_PEICE(NUM_ART, ARTICHOKE_UNIT_PRICE);
  }
  else
    printf("You did't buy!\n");
}

void BUY_BEET(void){
  printf("Please enter the number you wan to buy Beet:\n");
  if ((scanf("%d",&NUM_BEE) == 1) && NUM_BEE > 0){
    COUNT_BOUND += NUM_BEE;
    BEE_PRICE += CACULATE_UNIT_TOTAL_PEICE(NUM_BEE, BEET_UNIT_PRICE);
  }
  else
    printf("You did't buy!\n");
}

void BUY_CARROT(void){
  printf("Please enter the number you wan to buy Carrot:\n");
  if ((scanf("%d",&NUM_CAR) == 1) && NUM_CAR > 0){
    COUNT_BOUND += NUM_CAR;
    CAR_PRICE += CACULATE_UNIT_TOTAL_PEICE(NUM_CAR, CARROT_UNIT_PRICE);
  }
  else
    printf("You did't buy!\n");
}
void printInvoice(double total, double discount, double freight, int noPref) {
    printf("The total price you buy are :%.2lf\n",total);
    printf("The fregiht are :%.2lf\n",freight);
    printf("The all price are ;%.2lf\n",total + freight);
    printf("\n");
    printf("\n");
    printf("------------\n");
    printf("List :\n");
    printf("artichoke:\n");
    printf("Unit Price : 1.25$/lb \n");
    printf("Number:%d\n",NUM_ART);
    printf("Total price : %.2lf\n",ART_PRICE); 
    printf("Beets:\n");
    printf("Unit Price : 0.65$/lb \n");
    printf("Number:%d\n",NUM_BEE);
    printf("Total price : %.2lf\n",BEE_PRICE); 
    printf("Carrots:\n");
    printf("Unit Price : 0.89$/lb \n");
    printf("Number:%d\n",NUM_CAR);
    printf("Total price : %.2lf\n",CAR_PRICE);       
    printf("Order fees: %.2lf\n",total);
    if (noPref)
        printf("Preferential: 0 \n");
    else
        printf("Preferential: %.2lf\n",discount);
    printf("All price : %.2lf\n",total + freight);
}

int main(int argc, char *argv[])
{
  int choice;

  while((choice = GET_CHOICE()) != 'q')
  {
    switch (choice) {
    case 'a': BUY_ARTICHOKE();
      break;
    case 'b': BUY_BEET();
      break;
    case 'c': BUY_CARROT();
      break;
      default: printf("Program error!\n");
    }
  }
  double total = ART_PRICE + BEE_PRICE + CAR_PRICE;
  double freight = CACULATE_FREIGHT(COUNT_BOUND);
  int noPref = 1; 
  double discount = 0;
  if(total >= 100){
    noPref = 0;
    discount = total * PREFERENTIAL;
    total -= discount;
    }  
  printInvoice(total, discount, freight, noPref);
  return EXIT_SUCCESS;
}
