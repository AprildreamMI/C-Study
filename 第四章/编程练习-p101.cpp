#include <stdio.h>
#include <string.h>
#include <float.h>
#define SHEN 3.785
#define YINLI 1.609
// ���������ļ��ĵ��ٶ�
void xiaSpeend(void) {
  float speed, fileSize, fileDate;
  printf("���������ص��ٶ�, ���ļ��Ĵ�С: \n");

  scanf("%f %f", &speed, &fileSize);

  fileDate = (fileSize * 8) / speed;
  printf("���ص��ٶ�Ϊ��%.2f, �ļ���СΪ��%.2f, ���ظ��ļ���ʱ��Ϊ��%.2f", speed, fileSize, fileDate);

}

void printfNameChar(void) {
  char lastName[30];
  char firstName[30];
  int lastCount;
  int firstCount;

  printf("������������֣�\n");
  scanf("%s", lastName);
  printf("����������գ�\n");
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
  printf("����������ʹ������������ĵ�ȼ�͵ļ�������\n");
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
