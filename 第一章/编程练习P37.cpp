/*p31 页的编程练习*/
#include <stdio.h>
void printfName (void);
void printfAgeDay (void);
void printfOneThree (void);
int main (void) {
  /*printfName();
  printfAgeDay();*/
  printf("starting now\n");
  printfOneThree();
  printf("end");
}
/*第一题 打印名字*/
void printfName (void) {
  printf("赵 思\n");
  printf("赵\n思\n");
  printf("赵 思\n");
}

/*把年龄转换成天数*/
void printfAgeDay (void) {
  int age = 22;
  int days = 0;
  int yearDays = 365;

  days = yearDays * age;

  printf("我的年龄为：%d, 到现在一共过了：%d天\n", age, days);
}

/*打印 one*/
void printfOne (void) {
  printf("one\n");
}

/*打印 two*/
void printfThree (void) {
  printf("two\n");
  printf("three\n");
}

/*打印 one -> three*/
void printfOneThree (void) {
  printfOne();
  printfThree();
}
