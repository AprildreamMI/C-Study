/*编程练习 p1334*/
#include <stdio.h>
#define MINE 60
void mineHouse(void) {
  int mine, i;

  while(mine >= 0) {
    printf("请输入分钟数，将转化为小时数和分钟，输入负数结束程序：\n");
    scanf("%d", &mine);
    printf("%d 分钟是 %d 小时, %d 分钟\n", mine, mine / MINE, mine % MINE);
  }
}

void jiashi(void) {
  int n, maxCount;
  printf("请输入一个整数，会打印此整数至比此整数大10的区间中所有的整数： \n");
  scanf("%d", &n);
  maxCount = n + 10;
  while(n <= maxCount) {
    printf("%d   ", n);
    n++;
  }
}

void printfWeeks(void) {
  int day;
  while (day >=0 ) {
    printf("请输入天数，将转换为周数加天数的形式：\n");
    scanf("%d", &day);

    printf("%d天是%d周多%d天\n", day, day / 7, day % 7);
  }
}

void printfLifang(double num) {
  printf("%lf", num * num * num);
}

void printfMode(void) {
  int firstNum, lastNum;
  printf("请输入求模运算的第二个运算对象：\n");
  scanf("%d", &lastNum);
  printf("请输入求模运算的第一个运算对象：\n");
  scanf("%d", &firstNum);
  printf("%d %% %d = %d\n",firstNum, lastNum, firstNum % lastNum);
  while (firstNum >= 0) {
    printf("请输入求模运算的第一个运算对象：\n");
    scanf("%d", &firstNum);
    printf("%d %% %d = %d\n",firstNum, lastNum, firstNum % lastNum);
  }
}

void Temperatures(double huashi) {
  const float shezhiTemp = 5.0 / 9.0;
  const float shezhiTempChang = 32.0;
  const float kaisheTemp = 273.16;
  printf("华氏温度为：%lf， 摄氏温度为：%lf, 开氏温度为：%lf\n", huashi, shezhiTemp * ( huashi - shezhiTempChang), shezhiTemp * ( huashi - shezhiTempChang) + kaisheTemp);
}

int main(void) {
  double lf, huashi;
  //mineHouse();
  // jiashi();
  // printfWeeks();
  /*printf("请输入一个double，将计算他的立方值");
  scanf("%lf", &lf);
  printfLifang(lf);*/
  // printfMode();
  printf("请输入华氏温度，本程序将其转化为摄氏温度和开氏温度\n");
  int scanfReturn = scanf("%lf", &huashi);
  while (scanfReturn == 1) {
    Temperatures(huashi);
    printf("请输入华氏温度，本程序将其转化为摄氏温度和开氏温度\n");
    scanfReturn = scanf("%lf", &huashi);
  }

  return 0;
}
