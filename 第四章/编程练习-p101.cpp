#include <stdio.h>
#include <string.h>
#include <float.h>
#define SHEN 3.785
#define YINLI 1.609
// 计算下载文件的的速度
void xiaSpeend(void) {
  float speed, fileSize, fileDate;
  printf("请输入下载的速度, 和文件的大小: \n");

  scanf("%f %f", &speed, &fileSize);

  fileDate = (fileSize * 8) / speed;
  printf("下载的速度为：%.2f, 文件大小为：%.2f, 下载改文件的时间为：%.2f", speed, fileSize, fileDate);

}

void printfNameChar(void) {
  char lastName[30];
  char firstName[30];
  int lastCount;
  int firstCount;

  printf("请输入你的名字：\n");
  scanf("%s", lastName);
  printf("请输入你的姓：\n");
  scanf("%s", firstName);

  lastCount = strlen(lastName);
  firstCount = strlen(firstName);

  printf("%*s %*s\n%*d %*d\n", lastCount, lastName, firstCount, firstName, lastCount, lastCount, firstCount, firstCount);
  printf("%*s %*s\n%-*d %-*d\n", lastCount, lastName, firstCount, firstName, lastCount, lastCount, firstCount, firstCount);


}

void setDouble(void) {
  double doubleNum = 1.0 / 3.0;
  float floatNum = 1.0 / 3.0;

  printf("d: %.6f, f:%.6f\n", doubleNum, floatNum);
  printf("d: %.12f, f:%.12f\n", doubleNum, floatNum);
  printf("d: %.16f, f:%.16f\n", doubleNum, floatNum);
  printf("d: %f, f:%f\n", FLT_DIG, DBL_DIG);
}

void printfJiaLun(void) {
  float licheng, jialun, lichengKf, jialunShen, oneLiShen;
  printf("请输入你行使的里程数和消耗的燃油的加仑两：\n");
  scanf("%f %f", &licheng, &jialun);

  jialunShen = jialun * SHEN;
  lichengKf = licheng * YINLI;

  oneLiShen =  jialunShen / lichengKf;

  printf("%f", oneLiShen)
}

int main(void) {
  // xiaSpeend();
  // printfNameChar();
  // setDouble();
  printfJiaLun();
  return 0;
}
